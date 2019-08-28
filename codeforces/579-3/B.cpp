#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
int main()
{
lli q,n;
cin>>q;
while(q--)
{
lli counter=0;    
cin>>n;
lli a[4*n],b[2*n];
for(lli i=0;i<4*n;i++)
cin>>a[i];
sort(a,a+4*n);
lli i;
for(i=0;i<4*n;i+=2)
{
        if(a[i+1]!=a[i])
        break;
        else
        {
           b[i/2]=a[i]; 
        }
        
 }  
 
if(i!=4*n)
cout<<"NO"<<endl;
else
{
    lli pro=b[0]*b[2*n-1];
    for(i=0;i<n;i++)
    {
        if(b[i]*b[2*n-i-1]==pro)
        counter=0;
        else
        {
            counter=1;
            break;
        }    
    }
    if(counter==1)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
    }
    
}

}

}
