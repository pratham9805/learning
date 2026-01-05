#include<iostream>
using namespace std;
int main(){
    int num=10000;
    int rem,ans=0,mul=1;
    while (num)
    {
        rem=num%10;
        ans=rem*mul+ans;
        num=num/10;
        mul=mul*2;
    }
    cout<<ans;
}