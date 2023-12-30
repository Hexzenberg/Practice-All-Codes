#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    int *p,*q;
    p=&a;
    q=&b;
    cout<<"The sum of two numbers is:"<<*p+*q;
    return 0;
}