#include<bits/stdc++.h>
using namespace std;
const int N=1000;
const int K=5;
#define pb push_back
vector<vector<int>>adj(N+1);//adjancecy list represntation of tree
vector<int>euler;//euler tour of tree
vector<int>first(N+1,-1);//first array
int height[N+1];//table to contruct height of nodes
int st[N+1][25];//sparse table to store the index of node in euler
//array with minimum height

//when copying code Remember to Change K to required value



void dfs(int src,int par,int dept)
{
    if(src==par)return;
    euler.pb(src);
    
    

    height[src]=dept;
    for(auto i:adj[src])
    {
        if(i==par)continue;
        dfs(i,src,dept+1);

        euler.pb(src);
    }
}
void sparse_table(int n)
{
    for(int i=0;i<euler.size();i++)
    {
        st[i][0]=i;
    }

    for(int j=1;j<=K;j++)
    {
        for(int i=0;i + (1 << j) < euler.size();i++)
        {
            st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);

            int id1=st[i][j-1],id2=st[i+(1<<(j-1))][j-1];
            
            if(height[euler[id1]]<height[euler[id2]])
            {
             st[i][j]=id1;
            }
            else
            {
                st[i][j]=id2;
            }
            
        }
    }
    
}




    

//Finding LCA using euler Tour
//step-1 Construct a Euler tour of the tree
// Then contruct the array first such that euler[first[i]]=i
// Then apply Range-Minimum-Query to find minHeight bw
// first[v1] and first[v2]

void LCA(int v1,int v2)
{
dfs(1,0,0);// constructs the euler tour of tree

// constructing the array first only to get indices of node in euler Tour
for(int i=0;i<euler.size();i++)
{
    if(first[euler[i]]==-1)
    {first[euler[i]]=i;
    }
}

sparse_table(n);// build RMQ structure for Processing queries
// sparse Table process Queries in O(1) time


//suppose we are given q queries to find lca bw u and v

//here what we will do is find minimum height bw [u,v]
//using any RMQ structure but what we will do is
// use sparse table because it provides O(1)
//time for range minimum queries


int R=first[v2];
int L=first[v1];
if(L>R)swap(L,R);

int j=log2(R-L+1);

int ans=min(st[L][j],st[R-(1<<j)+1][j]);
int id1=st[L][j],id2=st[R-(1<<j)+1][j];


// finding the final Answer
if(height[euler[id1]]<height[euler[id2]])
{
    cout<<euler[id1]<<endl;
}
else 
cout<<euler[id2]<<endl;

}





//Just Call LCA function From your int main()
// provide the nodes to it for which answer is to be find
//You will get the answer to it

