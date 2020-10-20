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
