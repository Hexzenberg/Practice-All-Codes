#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,s;
    cout<<"Enter the number of digits of the number:";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the number:";
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    cout<<"The number entered by you:";
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    cout<<"\nEnter the number to be searched:";
    cin>>x;
    for(i=0;i<n;i++){ 
        if(a[i]==x){
            s=i;
            for(int j=i;j<n;j++){
                b[j]=a[j];
            }
        }
    }
    cout<<"\nThe number after deletion:";
    for(i=s;i<n;i++){
        cout<<b[i];
    }
    return 0;
}