#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli binomialCoeff(lli n, lli k)  
{  
    lli res = 1;  
  
    if ( k > n - k )  
        k = n - k;  
    for (int i = 0; i < k; ++i)  
    {  
        res *= (n - i);  
        res /= (i + 1);  
    }  
  
    return res;  
}  
  
int main()
{
lli t;
cin>>t;
while(t--)
{
    lli n,k;
    cin>>n>>k;
    lli a[n];
    for(lli i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    lli sum=0;
    for(lli i=0;i<k;i++)
    sum+=a[i];
    lli count=a[k-1];
    lli check=0;
    for(lli i=0;i<n;i++)
    {
        if(a[i]==count)
        check++;
        else if(check!=0)
        break;
    }
    lli check2=0;
    for(lli i=0;i<k;i++)
    {
    if(a[i]==count)
    check2++;
    else if(check2!=0)
    break;
    }
    cout<<binomialCoeff(check,check2)<<"\n";

}

    
}