//kosaraju algorithm
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
