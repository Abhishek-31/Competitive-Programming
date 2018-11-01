   /*Made by Abhishek Agarwal */
 #include<bits/stdc++.h>
 using namespace std;
 #define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
 int main()
 {
 fastio;
 int n,q,k,x;
 cin>>n>>q;
 int a[n],b[n];
 for(int i=0;i<n;i++)
 {
   cin>>a[i];
 }
 for(int j=0;j<q;j++)
 {
   for(int i=0;i<n;i++)
   {
     b[i]=a[i];
   }
cin>>k>>x;
for(int j=0;j<k;j++)
for(int i=0;i<n-1;i++)
   {
     b[i]=b[i]^b[i+1];
   }
   cout<<b[x-1]<<endl;
 }

 return 0;
 }
