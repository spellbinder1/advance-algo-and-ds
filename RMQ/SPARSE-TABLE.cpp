
int st[N][k]//k till 25 bcoz 1<<25>1e7

for(int i=0;i<N;i++)
st[i][0]=a[i];

//computing the sparse-table matrix
for(int j=1;j<=k;j++)
{
  for(int i=0;i+1<<j<N;++i)
  st[i][j]=f(st[i][j-1],st[i+1<<(j-1)][j-1])
//Because the range [i,i+2^j−1] of length 
//2^j splits nicely into the ranges [i,i+2^j−1−1] and [i+2^j−1,i+2^j−1], 
//both of length 2^j−1,
// we can generate the table efficiently using dynamic programming:
}
