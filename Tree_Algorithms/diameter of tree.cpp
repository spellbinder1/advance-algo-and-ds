#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<vector<int> >adj(N+1);
int maxdist;//intialised to zero
void dfs(int src,int par,int dist,int&node)//getting the farthest node from 1
{
  if(src==par)return;
  
  

  for(auto i:adj[src])
  {
    if(i!=par)
    { if(dist+1>maxdist)
      {
        maxdist=dist+1;
        node=i;
      }


      dfs(i,src,dist+1,node);
    }
  }

}

int diameter()
{
  int node,dist=0,src=1;
  dfs(1,0,0,node);// it intialises node to max
  //distance node from 1 or a-b
  
  maxdist=0;int n2;
  dfs(node,0,0,n2);//gives the maxdist from b-c
  //which is diameter of tree
  
  return maxdist;
  

}



int main(int argc, char const *argv[])
{
  //diameter of tree using dfs
  //simply take a arbitary node of the tree
  //then find the farthest node from it 
  // let it be b
  //then find the farthest node from b let it be c
  // the distance b-c is diameter of tree


 
  int x=diameter();
  cout<<x<<endl;
  return 0;
}
