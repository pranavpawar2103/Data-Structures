#include<iostream>
using namespace std;

void divisorsOfNumber(int n){
    int i; 
    for(i=1; i*i<n; i++){
        if(n%i==0)
            cout<<i<<" ";
    }
    for(;i>=1;i--){
        if(n%i==0)
            cout<<n/i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    divisorsOfNumber(n);
    return 0;
}

