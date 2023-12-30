#include<iostream>
using namespace std;
int main(){
	int n,i,x,j=0;
	cout<<"Enter the number of terms of the number:";
	cin>>n;
	int a[n];
	cout<<"Enter the number:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"The entered number by you:";
	for(i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"\nEnter the number that is to be searched and removed:";
	cin>>x;
	for(i=0;i<n;i++){
        if(a[i]==x){
			n--;
            for(j=i;j<n;j++)
                a[j]=a[j+1];
		}
	}
	cout<<"The original number after omission of the digit:";
    for(i=0;i<n;i++){
        cout<<a[i];
    }
	return 0;
}
