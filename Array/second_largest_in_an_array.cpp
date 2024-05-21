#include<iostream>
using namespace std; 

int secondLargest(int arr[], int n){
    int max = 0, secondMax = -1;
    for(int i = 1; i<n; i++){
        if(arr[i]>arr[max]){
            secondMax = max;
            max = i;  
        }
        else if (arr[i]!=arr[max])
            if(secondMax == -1 || arr[i]>arr[secondMax])
                secondMax = i; 
    }
    return secondMax;
}

int main(){
    int arr[] = {2,54,1978, 32};
    int n = 4, second_max;
    second_max = secondLargest(arr, n);
    cout<<second_max;
    return 0;  
}