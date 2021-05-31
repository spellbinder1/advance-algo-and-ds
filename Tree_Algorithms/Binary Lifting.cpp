/*TREE ALGORITHMS 
AUTHOR Spellbinder*/

/*BINARY LIFTING*/

#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int up[1001][25];
void dfs(int src,int par)
{
  if(src==par)return ;
  up[i][0]=par;
  for(int i=1;i<25;i++)
  {
    up[src][i]=up[up[src][i-1]][i-1];//its simply known as binary lifting
  }


  for(auto i:adj[src])
  {
    if(i!=par)
    {
      dfs(i,src);
    }
  }

}
int main(int argc, char const *argv[])
{
  //binary lifting 


  

  //here up[i][j] denotes 2*j th ancestor of node i
  //up[i][0]=parent of i 
  //the array up can be easily bulid using dfs
  //up[i][j]=up[up[i][j-1]][j-1];

  //Using this way we can build any ancestor 
  // of any node in log(n) time 

}
