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


int main(){

    cout << "**********************************\n";
    DWORD threadid;
    HANDLE hdl;
    hdl = CreateThread(NULL, 0, BasicThread, NULL, 0, &threadid);
    system("pause");



    return 0;
}