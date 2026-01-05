#include<iostream>
using namespace std;
int main(){
    int num=9;
    int rem,ans=0,mul=1;

    while(num){
        rem=num%8;
        ans=rem*mul+ans;
        num=num/8;
        mul*=10;
    }
    cout<<ans;
}