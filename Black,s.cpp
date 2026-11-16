#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    cout << "\033[96m";
    cout << "     ___       ___                      ___           " << endl;
    cout << "    /  /      /  /                     /  /           " << endl;
    cout << "   /  /____  /  /  ______    _____    /  /___   ______" << endl;
    cout << "  /  ___  / /  /  /____ /   /  ___/  /  _/  /  /  ___/" << endl;
    cout << " /  /__/ / /  /  /  __ /_  /  /___  /   _ <   /___  / " << endl;
    cout << "/_______/ /__/  /_____/_/ /______/ /__/ /_/  /_____/  " << endl;
    string init;
    while(true){
        cout << "\033[96m> \033[0m";
        if(!getline(cin, init)) break;
        if(init.empty()) continue;
        const string kernel = "kernel --ver";
        const string OS = "sstm --info--ver--";
        const string hw = "system-setup-info-all";
        const string ver = "--ver";
        const string exit = "exit";
        const string kern3l_panic = "kernel --panic";
        const string fastfetch = "fastfetch";
        const string doxed = "doxed";
        const string metrash = "metrash";
        const string exam = "exam";
        const string shell = "shell --type";
        const string dsk = "dsk";
        if(init == kernel){
            system("uname -r");
        } else if(init == OS){
            system("uname");
        } else if(init == hw){
            system("uname -a");
        } else if(init == ver){
            cout << "ver --linux --1.0.0.0" << endl;
        } else if(init == exit){
            return 0;
        } else if(init == kern3l_panic){
            system("inxi -Fxxxz");
        } else if(init == fastfetch){
            system("fastfetch");
        } else if(init == doxed){
            system("ip -br a");
        } else if(init == metrash){
            system("sudo sh -c 'sync; echo 3 > /proc/sys/vm/drop_caches'");
        } else if(init == exam){
            system("su -");
        } else if(init == shell){
            system("cat /etc/shells");
        } else if(init == dsk){
            system("lsblk");
        } else {
            if(system(init.c_str()) != 0){
                cout << "error" << endl;
            }
        }
    }
}
