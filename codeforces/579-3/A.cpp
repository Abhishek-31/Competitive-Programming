#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
int main()
{
lli q;
cin>>q;
while(q--)
{
    lli n;
    cin>>n;
    lli a[n],check;
    char dir;
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        check=i;
}
if(n==1)
{
    cout<<"YES"<<endl;
    continue;
}
if(check==n-1)
{
    if(a[0]-a[n-1]==n-1||a[n-1]-a[n-2]==1)
    {
dir='l';
    }
    else if(a[0]-a[n-1]==1)
    {
    dir='r';
    }
    else
    {
        dir='z';
    }
}
else if(check==0)
{
    if(a[n-1]-a[0]==n-1||a[1]-a[0]==1)
    dir='r';
    else if(a[n-1]-a[0]==1)
    dir='l';
    else
    {
        dir='z';
    }    
}
else{
if(a[check+1]-a[check]==n-1||a[check-1]-a[check]==1)
dir='l';
else if(a[check+1]-a[check]==1)
dir='r';
else
dir='z';
}
if(dir=='z')
{cout<<"NO"<<endl;
continue;}
lli d=1;
// cout<<dir<</endl;
if(dir=='l')
{
    for(lli i=check;i>0;i--)
    {
        if(a[i-1]-a[i]==1)
        d=1;
    else
    {
        d=0;
        break;
    }
    }
    if(d==0)
    {
        cout<<"NO"<<endl;
    }
    else if(check==n-1)
    cout<<"YES"<<endl;
    else
    {
        for(lli i=n-1;i>(check+1);i--)
        {
            if(i==n-1)
            {
                if(a[n-1]-a[0]==1)
                d=1;
                else
                {
                    d=0;
                    break;
                }
                
            }
            else
            {
                if(a[i-1]-a[i]==1)
                d=1;
                else
                {
                    d=0;
                    break;
                }
                
            }
        }
        if(d==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            
    }
    
    
}
else
{

    for(lli i=check;i<n-1;i++)
    {
    if(a[i+1]-a[i]==1)
    d=1;
    else
    {
        d=0;
        break;
    }
    }
    if(d==0)
    {
        cout<<"NO"<<endl;
    }
    else if(check==0)
    cout<<"YES"<<endl;
    else
    {
        for(lli i=0;i<check-1;i++)
        {
            if(i==0)
            {
                if(a[n-1]-a[0]==-1)
                d=1;
                else
                {
                    d=0;break;
                }
            }
            else
            {
                {
                    if(a[i+1]-a[i]==1)
                    d=1;
                    else
                    {
                        d=0;break;
                    }
                    
                }
            }   
        }
        if(d==0)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
        
    }
}

}
