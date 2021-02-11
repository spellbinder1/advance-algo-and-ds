//euler function gives us the number of numbers from 1 to n which are
//coprime to n
//euler totient function implementation
//formula is n*(1-1/p1)*(1-1/p2)*(1-1/p3)*.....


void eulerTotient(int m){
vector<int>fact;
for(int i=2;i<=sqrt(m);++i)
{
  if(m%i==0)
  {
    fact.pb(i);
    while(m%i==0)m/=i;
  }
}

double ans=m;

for(int i=0;i<fact.size();++i)
{
  ans*=double(p1-1);
  ans/=double(p1);
}

cout<<ll(ans)<<endl;
}
