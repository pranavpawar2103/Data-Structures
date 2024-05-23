#include<iostream>
using namespace std;

void leftRotationByD(int arr[], int n, int d){
    int temp[d];
    for(int i = 0;i<d; i++)
        temp[i]=arr[i];
    for(int i=d;i<n;i++)
        arr[i-d]=arr[i];
    for(int i=0;i<d;i++)
        arr[n-d+i] = temp[i];
    for(int i = 0; i<n; i++)
        cout<<arr[i]<< " ";
}

int main(){
    int arr[] = {10,20,30,40}, n=4, d=2;
    leftRotationByD(arr, n, d);
    return 0;
}