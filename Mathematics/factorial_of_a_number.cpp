#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++)
        fact = fact*i;
    return fact;
}

int factorialUsingRecurssion(int n){
    if(n==0)
        return 1;
    return n*factorialUsingRecurssion(n-1); 
}
int main(){
    int fact, fact_rec, n;
    cout<<"Enter a number: ";
    cin>> n;
    fact = factorial(n);
    cout<<"Factorial of a given number using normal function is "<<fact;
    fact_rec = factorialUsingRecurssion(n);
    cout<<"Factorial of a given number using recursive function is "<<fact_rec;
    return 0;
}