#include<iostream>
using namespace std;

int LCMOfTwoNumbers(int a, int b){
    int max;
    max = std::max(a, b);
    while(true){
        if(max%a==0 && max%b==0)
            return max;
        max++;
    }
    return max; 
}

int main(){
    int m, n, lcm;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    lcm = LCMOfTwoNumbers(m,n);
    cout<<"LCM of two given numbers is "<<lcm;
    return 0;
}