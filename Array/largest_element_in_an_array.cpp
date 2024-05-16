#include<iostream>
using namespace std;

int largestNumber(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(max<arr[i])
            max = arr[i];
    }
    return max;
}

int main(){
    int arr[] = {2,54,1978, 32};
    int n = 4, max;
    max = largestNumber(arr, n);
    cout<<max;
    return 0;  
}