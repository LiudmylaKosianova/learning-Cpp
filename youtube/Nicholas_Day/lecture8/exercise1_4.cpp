#include <iostream>
#include <string>
using namespace std;

void HelloM(){
    cout << "Hello!\n";
}
void GoodbyeM(){
    cout << "Goodbye!\n";
}
void Message(const string m){
    cout << m << endl;
}
bool Ascending(int x, int y){
    return y > x;
}
bool Descending(int x, int y){
    return y < x;
}
void Sort(int *numbers, int size, bool (*ptr)(int, int)){
    for(int i = 0; i < size; i++){
        int Bestindex = i;
        for(int j = i + 1; j < size; j++){
            // if(numbers[j] < numbers[Bestindex]){
            //     Bestindex = j;
            // }
            if(ptr(numbers[j], numbers[Bestindex])){
                Bestindex = j;
            }
        }
        swap(numbers[i], numbers[Bestindex]);
    }
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
    cout << "\n";
}

int main(){

    // void (*ptrFun)();
    // ptrFun = HelloM;
    // ptrFun();
    // ptrFun = GoodbyeM;
    // ptrFun();
    // void (*ptrFun2)(string);
    // ptrFun2 = Message;
    // ptrFun2("Flamingo");

    int arr[] = {9, 3, 7, 5, 6, 1, 8, 2, 4};
    Sort(arr, 9, Ascending);
    Sort(arr, 9, Descending);
    
    return 0;
}

