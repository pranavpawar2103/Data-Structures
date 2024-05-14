#include<iostream>
using namespace std;

int ropeCuttingProblem(int n, int a, int b, int c){
    int res;
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    res = max(ropeCuttingProblem(n-a, a, b, c), max(ropeCuttingProblem(n-b, a, b, c), ropeCuttingProblem(n-c, a, b, c)));

    if(res==-1)
        return -1;
    return res+1;   
}

int main(){
    int n,m;
    cout<<"Enter a number: ";
    cin>>n;
    m=ropeCuttingProblem(n, 11, 9, 12);
    cout<<m;
    return 0;
}