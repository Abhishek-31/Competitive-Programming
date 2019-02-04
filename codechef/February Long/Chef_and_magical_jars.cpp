/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
int main() 
{ 
fastio; 
long long int t,n,i,j,sum;
cin>>t; 
while(t--) 
{
    sum=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>j;
    sum+=j;
}
sum=sum-n+1;
cout<<sum<<"\n";
}


return 0;
}
//Submitted