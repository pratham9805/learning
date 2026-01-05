#include<iostream>
using namespace std;
int main(){
    int num=17;
    int rem,ans=0,mul=1;

    while(num){
        rem=num%10;
        ans=rem*mul+ans;
        num=num/10;
        mul*=8;
    }
    cout<<ans;
}