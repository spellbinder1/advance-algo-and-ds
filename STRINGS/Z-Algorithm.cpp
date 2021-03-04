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
vector<int> zarray(string s)
{
  int n=s.length();

  vector<int>z(n);
  int l=0,r=-1;


for(int i=0;i<n;i++)
{
  if(i<=r)
  z[i]=min(r-l+1,z[i-l]);

  while(i+z[i]<n&&s[z[i]]==s[i+z[i]])z[i]++;

  if(i+z[i]-1>r){l=i;r=i+z[i]-1;}

}
  
return z;


}
int main(int argc, char const *argv[])
{ 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

//lets write a function to calculate z array for string algorithms

string s;

std::vector<int> res=zarray(s);//this is our final answer




}
