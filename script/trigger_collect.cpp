#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <fstream>

using namespace std;
char * trigger_time[2] = {"BEFORE ", "AFTER "};
char * trigger_event[3] = {"INSERT", "INSERT", "UPDATE"};
int main(int argc, char * argv[]){
    srand(time(NULL));
    ifstream input(argv[1]);
    string line;
    while(getline(input, line)){
        if(line.empty() || line == " ") continue;
        cout << "CREATE TRIGGER x " << trigger_time[rand()%2] << trigger_event[rand()%3] << " ON x FOR EACH ROW "  << line << endl;
        
    }
    return 0;
}
