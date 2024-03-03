#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++)
        fact = fact*i;
    return fact;
}

int trailingZerosInFactorial(int n){
    int fact, num_of_zeros = 0;
    fact = factorial(n);
    while(fact%10==0){
        num_of_zeros++;
        fact = fact/10;
    }
    return num_of_zeros;
}

int main(){
    int n, num_of_zeros;
    cout<<"Enter a number: ";
    cin>>n;
    num_of_zeros = trailingZerosInFactorial(n);
    cout<<"The total number of trailing zeros in a factorial of a given numbers are "<<num_of_zeros;
    return 0;
}