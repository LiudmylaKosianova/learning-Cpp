#include <iostream>
#include <Windows.h>
using namespace std;

//a thread function that contains a statement to be exeuted
DWORD WINAPI BasicThread(LPVOID param){
    cout << "Thread starts\n";
    Sleep(2000);
    cout << "Thread ends\n";
    return 0;
}

DWORD WINAPI MessageThread(LPVOID param){
    for(int i = 0; i < 5; i++){
        cout << "Thread\n";
        Sleep(500);
    }
    return 0;
}


int main(){

    cout << "\n**********************************\n";
    //HANDLE hdl;
    // hdl = CreateThread(NULL, 0, BasicThread, NULL, 0, &threadid);
    
    LPVOID param = NULL;
    DWORD threadid;
    HANDLE hdl[3];
    int label = 1;
    hdl[0] = CreateThread(NULL, 0, MessageThread, (LPVOID)label, 0, &threadid);
    label = 2;
    hdl[1] = CreateThread(NULL, 0, MessageThread, (LPVOID)label, 0, &threadid);
    label = 3;
    hdl[2] = CreateThread(NULL, 0, MessageThread, (LPVOID)label, 0, &threadid);

    system("pause"); // will output "press any key to continue ..." to the screen



    return 0;
}