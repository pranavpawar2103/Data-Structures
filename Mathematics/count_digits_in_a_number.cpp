#include <iostream>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count; 
}

int main(){

    int n,count;
    cout<<"Enter a number: ";
    cin>>n;
    count = countDigits(n);
    cout<<"The total number of digits in a given number are: "<<count<<endl;
    return 0; 
}