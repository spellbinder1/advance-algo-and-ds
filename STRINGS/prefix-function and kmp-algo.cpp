//kmp algorithm
//FIRST prefix function generation
//prefix function generation
//now kmp algo
string s;
string pat;

cin>>s>>pat;

string ref=s+"#"+pat;

//build prefix function for string ref
int pip[ref.length()]={0};
pip[0]=0;

//prefix function generation
for(int i=1;i<ref.length();i++)
{
 int j=pip[i-1];
 while(j>0&&ref[i]!=ref[j])
 j=pip[j-1];


 if(ref[i]==ref[j])j++;
 
 pip[i]=j;

}
//pi[i] denotes longest suffix ending at i which is also prefix of substring s[0....i];


int n=s.length();
//kmp algorithm
bool ispresent=false;
for(int i=0;i<ref.length();i++)
{
    if(pip[i]==n)ispresent=true;
}

cout<<ispresent<<endl;
