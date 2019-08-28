#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
#define N 1000000007

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli nl,l,nr,r,cans;
        cin>>nl>>l>>nr>>r;
    // cout<<nl<<" "<<l<<" "<<nr<<" "<<r;
    // cout<<endl;
    lli x=l;
    lli maxi;
    if(nl>=nr)
    maxi=nl;
    else
    {
        maxi=nr;
    }
    // cout<<maxi<<endl;
    lli a[maxi+1];
    lli ans=0;
    for(lli z=l;z<=r;z++)
    {
        cans=0;
        lli j=z;
        lli count=0;
        while(j!=0)
        {

            a[count]=j%10;
            count++;
            j=j/10;
        }
        // a[0]=count;
    //     for(lli i=0;i<count;i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;
lli dif=12;
lli exp=1;
    for(lli i=0;i<count-1;i++)
{
// if(a[i]!=dif)
// dif=a[i];
if(a[i+1]!=a[i])
cans=((cans%N)+(a[i]%N*exp%N)%N)%N;
// cout<<cans<<" ";
exp*=10;
}
// if(a[i]!=a[i-1])
cans+=a[count-1]*exp;
ans=(ans % N+cans % N)%N ;
// cout<<cans<<" ";
// cout<<endl;
    }
    // cout<<endl;
// ans=ans+cans;
cout<<ans%N<<endl;

    }
}
