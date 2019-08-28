#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],b[n];
    for(long long int i=0;i<n;i++)
    cin>>a[i];
    b[0]=a[0];
    for(long long int i=1;i<n;i++)
        b[i]=b[i-1]^a[i];
        // for(long long int i=0;i<n;i++)
        // cout<<b[i]<<" ";
        // cout<<endl;
    long long int count=0,check;
    for(long long int i=1;i<n;i++)
    {
        
        for(long long int j=-1;j<i;j++)
        {
            if(j==-1&&b[i]==0)
            check=0;
            else if(b[i]==b[j])
            check=0;
            else
            {
                check=-9;
            }
            // cout<<i<<" "<<j<<" "<<check<<endl;
            if(check==0)
            {
                
                count+=(i-(j+1));
            }
        }
    }
    cout<<count<<endl;

    }
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t,s,e;
//     cin>>t;
//     int a[]={4,8,12,6,5,3,9,15,7,8,15};
//     for(int i=0;i<t;i++)
//     {
// cin>>s>>e;
// int x=0;
// for(int j=s;j<=e;j++)
// x=x^a[j];
//     cout<<x<<endl;}
    
// }