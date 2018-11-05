  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
  long long int n,k,m=-1,i;
    cin>>n>>k;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);
    k--;

    if(k<0){
        if(a[0]>1) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
        return 0;
    }
    if(a[k]==a[k+1])
        cout<<"-1"<<endl;
    else
        cout<<a[k]<<endl;
}


// if(k==0)
// {
//   if((a[0]-1)>=1)
//   cout<<a[0]-1<<endl;
//   else
//   cout<<m<<endl;
// }
// else if(k==n)
// {
//   if((a[n-1]+1)>=1&&(a[n-1]+1)<=1000000000)
//       cout<<a[n-1]+1<<endl;
//     }
//     else
//     {
//     if(a[k-1]==a[k])
//     cout<<m<<endl;
//     else
//     cout<<a[k-1]<<endl;
//   }
