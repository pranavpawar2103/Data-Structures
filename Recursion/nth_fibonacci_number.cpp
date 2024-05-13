#include<iostream>
using namespace std;

int nthFibonacciNumber(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return nthFibonacciNumber(n-1)+nthFibonacciNumber(n-2);
}

int main(){
    int n,m;
    cout<<"Enter a number: ";
    cin>>n;
    m = nthFibonacciNumber(n);
    cout<<m;
    return 0;
}