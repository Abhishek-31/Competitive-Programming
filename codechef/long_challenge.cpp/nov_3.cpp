/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
int main() 
{ 
fastio; 
int t,n,i,j,count; 
cin>>t; 
while(t--) 
{
  count=0;
  int flag = 0;
  cin >> n;
  int a[n+1], b[n+1], c[n+1];
  for (i = 1; i < n+1; i++)
    cin >> a[i];
vector<pair <int,int>> vect;
vect.push_back(make_pair(-3276, -3276));
for(i=1;i<=n;i++)
vect.push_back(make_pair(a[a[i]],a[i]));
sort(vect.begin(), vect.end());
for(i=1;i<n;i++)
{
  if(vect[i+1].first==vect[i].first)
  {
    if (vect[i+1].second != vect[i].second)
    {
      count = 1;
     }
  }
}
if(count==1)
  cout << "Truly Happy\n";
  else
    cout << "Poor Chef\n";
}
return 0;
}