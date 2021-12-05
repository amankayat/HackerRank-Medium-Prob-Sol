#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100000] = {0};
    a[0] = 1;
    int len=1,x=0,m=2;
    int carry=0;
    while(m<=n){
        x=0;
        carry=0;
        while(x<len){
            a[x] = a[x]*m;
            a[x] = a[x] + carry;
            carry = a[x]/10;
            a[x] = a[x]%10;
            
             
            
            x++;
            
        }
        while(carry!=0){
            a[len] = carry%10;
            carry/=10;
            len++;
        }
        m++;
    }
    for(int i=len-1;i>=0;i--)
    cout<<a[i];
}
