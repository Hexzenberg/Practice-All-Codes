#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,k;
    cout<<"Enter the order of matrix 1:";
    cin>>n;
    int a[n][n],s[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"Enter the element a["<<i+1<<"]["<<j+1<<"]:";
            cin>>a[i][j];
        }
    }
    cout<<"The entered matrix:\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<"\n";
    }
    cout<<"Enter the order of matrix 2:";
    cin>>m;
    int b[m][m];
    for (i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<"Enter the element b["<<i+1<<"]["<<j+1<<"]:";
            cin>>b[i][j];
        }
    }
    cout<<"The entered matrix:\n";
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }cout<<"\n";
    }
    if(n==m){
        cout<<"The sum of the matrices:\n";
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<(a[i][j]+b[i][j])<<" ";
            }cout<<"\n";
        }
        cout<<"The product of the matrices:\n";
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                s[i][j]=0;
                for(k=0;k<n;k++){
                    s[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<s[i][j]<<" ";
            }cout<<"\n";
        }
    }else cout<<"The addition and multiplication of the matrices is not possible as their order is not same.";
    return 0;
}