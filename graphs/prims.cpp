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
