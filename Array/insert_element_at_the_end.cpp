#include<iostream>
using namespace std;

//Assuming array has n-1 elements
void insertAtTheEnd(int arr[], int n, int element){
    arr[n-1] = element;
    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {2,3,6,11};
    int n = 5;
    insertAtTheEnd(arr, n, 73);
    return 0;
}