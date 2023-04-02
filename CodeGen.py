import fire
import os
import subprocess

# Generate template code based on language and input grammar dir
def generate_template_code(grammar_dir):
    os.chdir("..")
    if not os.path.exists("gen"):
        os.mkdir("gen")
    if not os.path.exists("gen/parser"):
        os.mkdir("gen/parser")

    # Save current dir
    cur_dir = os.getcwd()

    os.chdir(grammar_dir)
    subprocess.run("./replace.sh", check=True, shell=True)

    os.chdir(cur_dir)
    subprocess.run(
        f"python3 Generator.py -i {grammar_dir}/replaced_grammar -t {grammar_dir}/tokens -e {grammar_dir}/extra_flex_rule -s {grammar_dir}/semantic.json",
        shell=True,
        check=True,
    )

    os.chdir("gen/parser")
    subprocess.run("flex flex.l", shell=True, check=True)
    subprocess.run(
        "bison bison.y --output=bison_parser.cpp --defines=bison_parser.h --verbose -Wconflicts-rr",
        shell=True,
        check=True,
    )


if __name__ == "__main__":
    fire.Fire(generate_template_code)
