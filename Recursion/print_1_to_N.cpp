#include<iostream>  
using namespace std;

void printNto1(int n){ 
    if(n==0)
        return;
    printNto1(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNto1(n);
    return 0;
}