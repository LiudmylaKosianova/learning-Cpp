#include <iostream>
#include <vector>

using namespace std;


static int counter;
static int counterD;
vector<int>memo (100, -1);

int fib(int n){
    counter++;
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);

}
int fibD(int n){
    counterD++;
    if (memo[n] != -1){
        return memo[n];
    }
    if(n==0 || n==1){
        return n;
    }
    memo[n] = fibD(n-1) + fibD(n-2);
    return memo[n];
}

int main(){

    int n = 15;
    std::cout<<"fib("<<n<<")="<<fib(n)<<std::endl;
    std::cout<<"counter="<<counter<<"\n";
    std::cout<<"fibD("<<n<<")="<<fibD(n)<<std::endl;
    std::cout<<"counterD="<<counterD<<"\n";



    return 0;
}