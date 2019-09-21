#include<bits/stdc++.h>
#define int long long int
using namespace std;
float t1,t2;
int32_t main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int x;
    cin>>x;
    int q=sum/(x+1);
    // cout<<q<<endl;
    int asum=0,bsum=0,abox=0,bbox=0;
    for(int i=0;i<n;i++)
    {
        if(asum<q*x)
        {
            // cout<<asum<<"."<<endl;
if(q*x-asum<a[i])
{
t1=(1.0*asum)/x;
break;
}
else
{

asum+=a[i];            
abox+=1;
               }       }

        else
        {
            break;
        }
        
    }
    for(int i=n-1;i>=0;i--)
    {
         if(bsum<=q)
        {
if(q-bsum<a[i])
{
t2=(1.0*bsum);
break;
}
else
{

bsum+=a[i];            
bbox+=1;
               }       }

        else
        {
            break;
        }
    }
    cout<<t1<<" "<<t2<<endl;
    if(t1<t2 && abox+bbox<n)
    {
        // cout<<"check1";
cout<<abox+1<<" "<<bbox<<endl;
    }
    else if(t1>t2&&abox+bbox<n)
    {
        // cout<<"check2";
        cout<<abox<<" "<<bbox+1<<endl;
    }
    else if(t1==t2 &&abox+bbox<n)
    {
        if(bbox>abox)
        cout<<abox<<" "<<bbox+1<<endl;
        else
        {
            cout<<abox+1<<" "<<bbox<<endl;
        }
        
    }
    else
    {
        cout<<abox<<" "<<bbox<<endl;
    }
    
    

}}