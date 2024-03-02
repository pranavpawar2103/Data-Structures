#include <iostream>
using namespace std;

void palindromeCheck(int n){   
    int rev_num = 0, x=n;
    while(n>0){
        rev_num = rev_num*10 + (n%10);
        n = n/10;
    }
    if(rev_num == x)
        cout<<"The given number is palindrome.";
    else
        cout<<"The given number is not palindrome.";
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    palindromeCheck(n);
    return 0;
}