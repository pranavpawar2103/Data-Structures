#include<iostream>
#include <algorithm>
using namespace std;

int GCDOfNumbers(int n, int m){
    int gcd, min;
    min = std::min(n, m);
    for(int i = 1; i <= min; i++){
        if(n%i ==0 && m%i==0)
            gcd = i;
    }
    return gcd;
}

int GCDOfNumbersUsingRecurrsion(int a, int b){
    if(b == 0)
        return a;
    else    
        return(a, a%b);
}

int main(){
    int n,m,gcd;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    gcd = GCDOfNumbersUsingRecurrsion(n,m);
    cout<<"The GCD of two given numbers is "<<gcd;
    return 0;
}