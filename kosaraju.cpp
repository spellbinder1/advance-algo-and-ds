#include "bits/stdc++.h"
using namespace std;
const int N=1e5;
#define ip pair<int,int>
#define pb push_back
vector<vector<ip> >v(N+1);
bool vist[N+1];
vector<int>res;

//program for kosaraju algorithm
// what we do here is run two dfs or two times dfs
//first we run dfs on our normal graph
// then on the graph with reversed edges 


void dfs1(int src)
{ 
if(vist[src])return ;
vist[src]=true;
for(auto i:v[src])
{
if(!vist[i.first]&&i.second==1){dfs1(i.first);}
}
res.pb(src);

}

void dfs2(int src)
{
  if(vist[src])return;
  
  vist[src]=true;

  for(auto i:v[src])
  {
    if(i.second==2&&!vist[i.first])dfs2(i.first);
  }
  
  cout<<src<<" ";
}




int main(int argc, char const *argv[])
{ 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
int n,m;
cin>>n>>m;

for(int i=0;i<m;i++)
{
  int x,y;
  cin>>x>>y;
  v[x].pb({y,1});
  v[y].pb({x,2});
}


memset(vist,false,sizeof(vist));

for(int i=0;i<n;i++)
if(!vist[i])dfs1(i);


for(int i=0;i<=N+1;++i)vist[i]=false;

reverse(all(res));




for(int i=0;i<res.size();i++)
{
  if(!vist[res[i]]){dfs2(res[i]);cout<<endl;
}
  
}


}
