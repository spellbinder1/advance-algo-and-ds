#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define mod 1000000007
const int N=1e5;
#define mp make_pair
#define ip pair<int,int>
#define umii unordered_map<int,int>
#define umss unordered_map<string,string>
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define lcm(a,b) (a*b)/gcd(a,b)
#define all(x) x.begin(),x.end()
#define setbit(x) __builtin_popcount(x)
#define print(x) for(auto i:x)cout<<i<<" ";
#define pb push_back
const ll INF=1e9;
vector<vector<ip> >v(N+1);//first store vertex second weight of edge 



///dijkstra fails if edges have negative weights



void dijkstra(int src)
{
  
  dist.assign(n+1,INF);


  priority_queue<ip,vector<ip>,greater<ip> >pq;//min heap

  pq.push(mp(0,src));

  while(!pq.empty())
  {
    auto x=pq.top();
    pq.pop();
    if(x.first!=dist[x.second])continue;//most imp step otherwise complexity can increase upto o(nm)

    for(auto i:v[x.second])
    {
      if(dist[i.first]>dist[x.second]+i.second)
      {
        dist[i.first]=dist[x.second]+i.second;
        pq.push({dist[i.first],i.first});
      }
    }

  }
 


}
int main(int argc, char const *argv[])
{
  
//dijkstra algorithm
}
