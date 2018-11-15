/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 

int main() 
{ 
fastio; 
 long long int t,k,i,n,z=-1,j; 
cin>>t; 
long long int a[t],b[26];
for(i=0;i<t;i++)
cin>>a[i];
b[1] = 1;
for (k = 2; k <= 25; k++)
{
    b[k] = b[k - 1] * 2 + z;
    z *= -1;
}

for(i=0;i<t;i++)
{
       cout << b[a[i]] <<" "<<(long long int)pow(2,a[i])<<" "; }
return 0;
}

