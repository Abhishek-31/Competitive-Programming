   /*Made by Abhishek Agarwal */
 #include<bits/stdc++.h>
 using namespace std;
 #define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
 int main()
 {
 fastio;
 int t,i,j,k,n;
 cin>>t;
 while(t--)
 {
   int flag=0;
   cin>>n;
   int a[n],b[n],c[n];
   for(i=0;i<n;i++)
   {cin>>a[i];
   b[i]=a[i];
 }
 sort(b,b+n);
 k=0;
 c[k]=b[0];
 for(i=1;i<n;i++)
 {
   if(b[i]!=c[k])
     {
       k++;
       c[k]=b[i];
     }
     else
     continue;
 }
 // for(j=0;j<=k;j++)
 // cout<<c[j]<<" ";
 // cout<<endl;
 for(j=0;j<=k;j++)
  {
    for(i=j+1;i<=k;i++)
    if(a[c[i]-1]==a[c[j]-1])
    {
     flag=1;
     // cout<<"index is "<<c[i]<<"and"<<c[j]<<" and value is "<<a[c[i]]<<"and"<<a[c[j]]<<"\n ";
     cout<<"Truly Happy\n";
     break;
 }
 if(flag==1)
 break;
 }
 if(flag==0)
 cout<<"Poor Chef\n";
}
 return 0;
 }
