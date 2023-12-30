#include<bits/stdc++.h>
#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define pqb priority_queue<int>
#define pds priority_queue<int,vi,greater<int>>
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x;cin>>x;while(x--)
#define endl '\n'
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	w(t){
		int x,y,z;
		cin>>x>>y>>z;
		cout<<((x<=y)?z:((x%y==0 && x>y)?(x/y)*z:((x/y)+1)*z))<<endl;
	}
	return 0;
}