#include "bits/stdc++.h"
using namespace std;
int BIT[1000]={0};int n;
void update(int id,int el)
{
	for(;id<=n;id+=(id&(-id)))
	BIT[id]+=el;
}
int query(int id)
{   int sum=0;
	for(;id>0;id-=(id&(-id)))
	sum+=BIT[id];

    return sum;
}

int main(int argc, char const *argv[])
{
	
	cin>>n;
	int a[n];

    for(int i=0;i<n;i++)
    {cin>>a[i];
    update(i,a[i]);
    }
    
  
	

}
