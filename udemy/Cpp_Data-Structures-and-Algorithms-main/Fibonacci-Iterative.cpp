#include <iostream>
#include <vector>

using namespace std;

static int counter = 0;


int fib(int n){
    vector<int>fibList;
    fibList.push_back(0);
    fibList.push_back(1);

    for(int i=2; i<=n; i++){
        counter++;
        fibList[i] = fibList[i-1] + fibList[i-2]; 
    }
    return fibList[n];
}

int main(){

    int n = 15;
    std::cout<<"fib("<<n<<")="<<fib(n)<<std::endl;
    std::cout<<"counter="<<counter<<"\n";
     


    return 0;
}