/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
#define uul unsigned long long long long long long int ;

 int main() 
{ 
fastio; 
long long int t,n,i,j,count=0; 
cin>>t; 
while(t--) 
{
long long  int b[27],count=0;
for(long long int z=0;z<26;z++)
{
    b[z]=-1;
}
cin>>n;
string a[n+1];
long long int c[26],beech;
for(i=0;i<26;i++)
c[i]=-1;

for(i=0;i<n;i++)
    cin>>a[i];
for (i = 0; i < n; i++)
for(j=0;a[i][j]!='\0';j++)
  {
beech=int(a[i][j])-97;
if(c[beech]==i-1)
{
    c[beech]=i;
}
else if(c[beech]==i)
continue;
else
{
    c[beech]=-4;
}
}
for(long long int z=0;z<26;z++)
{
    if(c[z]==n-1)
    count++;
}
cout<<count<<endl;
// for(i=0;i<n;i++)
// {
//     for (j = 0; a[i][j]!= '\0'; j++)
//     { 
//         cout<<a[i][j];
//         if(i==0)
//         {
//         b[a[i][j]-97]=0;    
//         }
//       else
//       {
//           if(b[a[i][j]-97]==i-1)
//           {
//               b[a[i][j]-97]=i;
//           }

//           for(i=0;i<26;i++)
//           {
//               b[a[i][j]-97]=-1;
//           }
//       }
      
    
//     }
// }
// for(i=0;i<26;i++)
// {
//     if(b[i]==n-1)
//     count++;
// }
// cout<<count;
}
return 0;
}
//Submitted