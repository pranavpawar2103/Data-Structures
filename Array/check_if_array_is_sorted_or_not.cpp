#include<iostream>
using namespace std; 

bool isArraySorted(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}


int main(){
    int arr[] = {2,2,1978, 3234};
    int n = 4 ;
    cout<< isArraySorted(arr, n);;
    return 0;  
}