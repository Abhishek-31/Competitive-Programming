/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
int main() 
{ 
fastio; 
long long int t,n,i,max,maxi,z; 
cin>>t; 
while(t--) 
    
{
    int flag=0;
    cin>>n;
    long long int a[n],b[n],c[n],d[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for (i = 0; i < n; i++)
        cin>>b[i];
    for (i = 1; i < n-1; i++)
        {
            c[i]=a[i-1]+a[i+1];
            c[i]=b[i]-c[i];
            }
            c[0]=a[n-1]+a[1];
            c[0]=b[0]-c[0];
            c[n-1]=a[n-2]+a[0];
            c[n-1]=b[n-1]-c[n-1];
int l=0;
            for(int j=0;j<n;j++)
            {
if(c[j]>0)
{
    flag=1;
    d[l]=b[j];
    l++;
}
            }
            if(flag==0)
            cout<<"-1"<<endl;
            else 
            {
sort(d,d+l);
cout<<d[l-1]<<endl;
            }
            // for(i=0;i<n;i++)
            // cout<<c[i]<<" ";
            // cout<<endl;
// cout<<"worked"<<c[0];
// max=c[0];
// maxi=0;
// for(z=1;z<n;z++)
// {
// if(c[z]>=max)
// {max=c[z];
// maxi=z;}

// }
// if(max<=0)
// cout<<"-1"<<endl;
// else
// {
//     cout<<b[maxi]<<endl;
// }

// long long long long int max=c[0],maxi;
// for(i=1;i<n;i++)
// {
//     if(c[i]>max)
// {max=c[i];
// maxi=i;
// }
// }
// if(max<=0)
// cout<<"-1"<<"\n";
// else
// cout<<b[maxi]<<"\n";

            // for(i=0;i<c.length)
            // if (*std::max_element(c.begin(), c.end())<=0)
            // cout<<"-1"<<"\n";
            // else
            // {
            //     cout << (*std::max_element(c.begin(), c.end()));
            // }
            
            }
return 0;
}
//Accepted