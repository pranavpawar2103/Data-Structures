#include<iostream>
using namespace std;

void checkForPrime(int n){
    if(n==1){
        cout<<"The number one(1) is neither a prime nor a composite. ";
        return;
    }
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