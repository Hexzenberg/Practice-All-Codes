#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    int b;
    public:
        void set(){
            int a;
            cout<<"Enter the value of a "<<endl;
            cin>>a;
            this->a=a;
        }
        A& set2(){
            int b;
            cout<<"Enter the value of b "<<endl;
            cin>>b;
            this->b=b;
            return *this;
        }
        void dis(){
            cout<<"The set value of a is "<<a<<endl;
        }
        void dis2(){
            cout<<"The set value of b is "<<b<<endl;
        }
};
int main(){
    A a;
    a.set();
    a.set2().dis2();
    a.dis();
    return 0;
}