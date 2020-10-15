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
