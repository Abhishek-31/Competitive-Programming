#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
lli n, a[10]={0},lmin=0,lmax=9,lmin2=0,lmax2=9;
cin>>n;
char b[n+1];
cin>>b;

// set<int> z;
// for(lli i=0;i<10;i++)
// z.insert(i);
for(lli i=0;i<n;i++)
{
    if(b[i]=='L')
    {for(lli j=0;j<10;j++)
        if(a[j]==0)
        {a[j]=1;
        break;}
    }
    else if(b[i]=='R')
    {
        for(lli j=9;j>=0;j--)
        {
            if(a[j]==0)
            {a[j]=1;
            break;}
        }
    }
    else
    {
        lli x=int(b[i])-48;
        a[x]=0;
    }
}
    
//     else if(b[i]=='R')
//     {
// auto m=z.end();
// z.erase(*m);
//     }
    
//     else
//     {
//         lli x=int(b[i])-48;
// z.insert(x);
// }
// }
// for(auto i:z)
// {
//     a[i]=1;
// }
for( lli i=0;i<10;i++)
cout<<a[i];

}