#include<iostream>
using namespace std;

int sumOfNaturalNumbers(int n){
    if(n==1)
        return 1;
    return n + sumOfNaturalNumbers(n-1);
}

int main(){
    int n,m;
    cout<<"Enter a number: ";
    cin>>n;
    m=sumOfNaturalNumbers(n);
    cout<<m;
    return 0;
}