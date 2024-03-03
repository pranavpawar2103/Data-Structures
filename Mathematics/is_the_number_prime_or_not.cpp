#include<iostream>
using namespace std;

void checkForPrime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            cout<<"The given number is not a prime.";
            return;
        }
    }
    cout<<"The given number is prime.";
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    checkForPrime(n);
    return 0;
}