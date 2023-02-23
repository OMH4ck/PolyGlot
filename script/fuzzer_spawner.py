import libtmux
import os
import argparse
from datetime import date

def ap(a):
    return os.path.abspath(a)

if __name__ == "__main__":
    args = argparse.ArgumentParser()
    args.add_argument("-f", "--fuzzer", help = "path of the fuzzer", required=True)
    args.add_argument("-o", "--output", help = "path of the output result", required=True)
    args.add_argument("-i", "--input", help = "path of the input seed", required=True)
    args.add_argument("-w", "--where", help = "path of the fuzz root dir", required=True)
    args.add_argument("-p", "--program", help = "path of the fuzzed program or cmd", required=True)
    args.add_argument("-n", "--number", help = "the number of fuzzers", required=True)
    args.add_argument("-s", "--session", help = "tmux session name", required=True)
    args.add_argument("-m", "--multi", help = "use parallel fuzzing", required=False, default = False, action = "store_true")

    arg_result = args.parse_args()

    today = str(date.today())
    server = libtmux.Server()
    session = server.new_session(session_name = arg_result.session)

    nums = int(arg_result.number)

    print("Spawning fuzzer....")
    for i in range(nums):
        if(os.path.exists(arg_result.output) == False):
            os.mkdir(arg_result.output)
        if(arg_result.multi):
            output_dir = ap(arg_result.output) + "/" + today
            if i == 0:
                cmd = "%s -M master -m none -t 200+ -i %s -o %s -- %s @@" % (ap(arg_result.fuzzer), ap(arg_result.input), output_dir, ap(arg_result.program))
            else:
                cmd = "%s -S slave%d -m none -t 200+ -i %s -o %s -- %s @@" % (ap(arg_result.fuzzer),i, ap(arg_result.input), output_dir, ap(arg_result.program))
        else:
            output_dir = ap(arg_result.output) + "/" + today + "_" + str(i)
            cmd = "%s -m none -t 200+ -i %s -o %s -- %s @@" % (ap(arg_result.fuzzer), ap(arg_result.input), output_dir, ap(arg_result.program))
        win = session.new_window(attach = False)
        pane = win.attached_pane
        pane.send_keys('cd ' + arg_result.where)
        pane.send_keys("ulimit -c unlimited")
        pane.send_keys(cmd)
    print("Done! Check tmux session %s" % arg_result.session)
