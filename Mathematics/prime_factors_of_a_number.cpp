#include<iostream>
using namespace std;

void primeFactorsOfNumber(int n){
    if (n==1)
        return;
    for(int i=2;i*i<n;i++){
        while(n%i==0){
            cout<<i<<endl;
            n = n / i;
        }
    }
    if(n>1)
        cout<<n;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    primeFactorsOfNumber(n);
    return 0;
}