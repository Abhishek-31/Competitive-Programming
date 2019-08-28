#include<bits/stdc++.h>
using namespace std;
// int multiple(long long int a,long long int b)
// {
// long long int x;
// long double y;
// x=a/b;
// y=1.0*a/(1.0*b);
// // cout<<x<<y<<endl;
// if(x==y)
// return 1;
// else
// {
//     return 0;
// }
// }
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if((n/k)%k==0)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
        }
        
    }
// int a=8;
// float b=8.0001;
// if(a==b)
// cout<<"same";
}