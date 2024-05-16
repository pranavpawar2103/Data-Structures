#include<iostream>
using namespace std;
//Assuming array has n-1 elements
void insertElementAtPosition(int arr[], int n, int pos, int element){
    for(int i = n-1; i>=pos; i--)
        arr[i]=arr[i-1];
    arr[pos] = element;
    for(int j = 0; j<n; j++)
        cout<< arr[j]<<" ";
}

int main(){
    int arr[] = { 2,5,9,11};
    int n = 5, pos = 2, element = 112;
    insertElementAtPosition(arr, n, pos, element);
    return 0;
}
