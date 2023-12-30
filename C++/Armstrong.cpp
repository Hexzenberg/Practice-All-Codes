#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=1,i,r=0,x=0;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The entered number:"<<n<<endl;
    int s=n;
    r=log10(n)+1;
    cout<<"The number of digits in the entered number is:"<<r<<endl;
    while(n>0){
        int b=n%10;
        a+=pow(b,r);
        n/=10;
    }
    if(a==s)cout<<"The entered number is a Armstrong number";
    else cout<<"The entered number is not a Armstrong number";
    return 0;
}