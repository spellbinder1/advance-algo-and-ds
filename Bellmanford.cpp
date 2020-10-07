#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
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
vector<tuple<int,int,int> >edge;

int main(int argc, char const *argv[])
{ 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 

//bellman-ford algorithm
//we will use here edge list

//each item will store b/w what points is the
//edge located and weight of edge


int n,m;//n is the vertex and m is the number of edges
//TIME COMPLEXITY IS O(nm);
//Bellman ford also works for negative edges unlike dijstra

for(int i=0;i<m;i++)
{
  int a,b,w;
  cin>>a>>b>>w;
  edge.pb(make_tuple(a,b,w));
}

int dist[n+1];//it will tell the distance of each node from source

//implementing BELLMAN-FORD here
for(int i=0;i<n;i++)
{
  for(auto e:edge)
  {
    int a,b,w;
    tie(a,b,w)=e;
    dist[b]=min(dist[b],dist[a]+w);
  }
}



//what happens is in each iteration of this algo
//it tries to improve the distance of a vertex 
//it's also single source shotest path algo like dijkstra

}
