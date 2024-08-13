#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define mod 998244353
const ll N=200000;
#define mp make_pair
#define ip pair<ll,ll>
#define umii unordered_map<int,int>
#define umss unordered_map<string,string>
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define lcm(a,b) (a*b)/gcd(a,b);
#define all(x) x.begin(),x.end()
#define setbit(x) __builtin_popcount(x)
#define print(x) for(auto i:x)cout<<i<<" "
#define pb push_back 
#define forn(i,a,b)for(int i=a;i<b;i++)

int main()
{	int t;
	
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
	
	vector<int>a;//this is the vector on which queries are to be performed
	int n = a.size();

	int len = sqrt(n)+1; //[dividing the range in ]

	for(int i=0;i<n;i++)
	{
		b[i/len] += a[i];
	}

	//suppose query is from [l,r]

	int sum = 0;

	for(int i=l;i<=r;i++)
	{
		if(i%len==0&&(i+len-1)<=r)
		{
			sum += b[i/len];
		}
		else sum += a[i];
	}
}