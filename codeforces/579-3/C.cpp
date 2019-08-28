#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
int main()
{
lli n;
cin>>n;
lli a[n];
for(lli i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
lli b[a[0]+10];
for(lli i=0;i<a[0]+10;i++)
b[i]=0;
lli i,j,count=1;
    for(j=2;j<=a[0];j++)
    {
//         if(b[j]==3)
//         {
// count++;
//             b[j]=2;
//             lli pro=j;
//             lli ch=0;
//             for(lli z=2;z<j;z++)
//             {
//                 ch=1;
// if(b[z]==2)
// {
//     // cout<<z<<" "<<b[z]<<endl;
// pro=pro*z;}
//             }
//             if(ch==1)
//             {
//             for(lli mz=pro;mz<=a[0];mz+=pro)
//             {
//                 // cout<<" "<<" "<<z<<endl;
//                 b[mz]=3;}
//                 // b[j]=2;
//             // cout<<j<<endl;
//         }
//         }
        else if(b[j]==0)
        {
            // cout<<"entered for"<<j<<endl;
            for(i=0;i<n;i++)
        {
            if(a[i]%j==0)
            continue;
            else
            break;
    }
    if(i==n)
        {
            // cout<<j<<endl;
            count++;
            b[j]=2;
            lli pro=j;
            lli ch=0;
            for(lli z=2;z<j;z++)
            {
                ch=1;
if(b[z]==2)
{
    // cout<<z<<" "<<b[z]<<endl;
pro=pro*z;}
            }
            if(ch==1)
            {
            for(lli mz=pro;mz<=a[0];mz+=pro)
            {
                // cout<<" "<<" "<<z<<endl;
                b[mz]=3;}
                // b[j]=2;
            // cout<<j<<endl;
        }}
else
{
    // cout<<"rejected: "<<j<<endl;
    for(i=j;i<=a[0];i+=j)
    b[i]=1;
}

    }
    }
    cout<<count<<endl;
   
}