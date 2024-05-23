#include<iostream>
using namespace std;

void moveZerosAtTheEnd(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[count], arr[i]);
            count++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {10,20,0,0,30,40}, n=6;
    moveZerosAtTheEnd(arr, n);
    return 0;
}