#include<bits/stdc++.h>
using namespace std;
#define lli long long int 

lli logfinding(lli n)
{
    lli zomato=0;
    while(n>1)
    {
        n/=2;
            zomato++;
    }
    return zomato;
}

int main(){
    
   int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        if(n==1)
        cout<<"0"<<"\n";
        else if(n==2||n==3)
        cout<<"1"<<"\n";
        else
        {

            int zomato2=logfinding(n);
            lli b=zomato2%4;
            int a[4];
            a[0]=0;
            a[1]=9;
            a[2]=2;
            a[3]=3;
            if(b==2||b==3||b==0)
            cout<<a[b]<<"\n";
            else 
            cout<<"9"<<"\n";
        }
    }
    return 0;
}