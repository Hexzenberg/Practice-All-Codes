#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,y,x,p=0,q=0;
    cout<<"Enter the number greater than 2:";
    cin>>n;
    cout<<"The numbers which add up to the entered number are:";
    for(i=n-2;i>=2;i--){
        y=n-i;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                p=1;
                break;
            }
        }
        for(j=2;j<=y/2;j++){
            if(y%j==0){
                q=1;
                break;
            }
        }
        if(p==0 && q==0){
            x=i;
            cout<<y<<" and "<<x;
            break;
        }
        p=0;
        q=0;
        if(x==i)break;
    }
    return 0;
}