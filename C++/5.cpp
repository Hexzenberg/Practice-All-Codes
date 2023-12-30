/*
ID: Hexzenberg
PROG: ride
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout("ride.out");
    ifstream fin("ride.in");
    string a,b;
    fin>>a>>b;
    int c=1,d=1;
    for(int i=0;i<a.length();i++)if((int)a[i]-64>=1&&(int)a[i]-64<=26)c*=(int)a[i]-64;
    for(int i=0;i<b.length();i++)if((int)b[i]-64>=1&&(int)b[i]-64<=26)d*=(int)b[i]-64;
    fout<<((c%47==d%47)?"GO\n":"STAY\n");
    return 0;
}