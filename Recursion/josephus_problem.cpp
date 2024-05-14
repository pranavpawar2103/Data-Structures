#include<iostream>
using namespace std;

int josephusProblem(int n, int k){
    if(n==1)
        return 0;
    else    
        return (josephusProblem(n-1,k)+k)%n;
}

int main(){
    int n, k;
    cout<<"Enter value of n and k: ";
    cin>>n>>k;
    cout<<josephusProblem(n,k);
    return 0;
}