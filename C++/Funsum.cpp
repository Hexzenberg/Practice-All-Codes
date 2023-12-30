#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"The sum of the two variables using function is:"<<a+b;
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    sum(a,b);
    return 0;
}