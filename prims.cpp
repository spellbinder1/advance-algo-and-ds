#include "bits/stdc++.h"
using namespace std;
const int N=1e5;
#define pb push_back
vector<vector<ip> >v(N+1);
bool inmst[N+1];
int n;
const int INF=1e9;
void prims(int src)
{
  priority_queue<ip,vector<ip>,greater<ip> >pq;
  pq.push({0,src});
  int dist[N+1];
  for(int i=0;i<n;i++)dist[i]=INF;

   //dist array gives the value of that edge through which 
  // a particular vertex is attached to the mst
  int par[N+1];//par array gives through which vertex is another vertex connnected
  par[src]=-1;
  dist[src]=0;

  while(!pq.empty())
  {
    auto x=pq.top();
    pq.pop();
    inmst[x.second]=true;
    
    for(auto i:v[x.second])
    {
      if(!inmst[i.first]&&dist[i.first]>i.second)
      {
        
        dist[i.first]=i.second;
        pq.push({dist[i.first],i.first});
        par[i.first]=x.second;
      }
    }



  }

}
int main(int argc, char const *argv[])
{ 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
memset(inmst,false,sizeof(inmst));



}
