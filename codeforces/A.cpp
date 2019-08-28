// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// long long int n;
// cin>>n;
// string a;
// cin>>a;
// long long sum=0;
// for(int i=0;i<n;i++)
// {
// //         if(a[i]=='a'){
// // sum=sum+1*(i+1);
// //         }
// //         else if
// switch(a[i])
// {
// case('a'):
// sum=sum+1*(i+1);
// break;
// case('e'):
// sum=sum+5*(i+1);
// break;
// case('i'):
// sum=sum+9*(i+1);
// break;
// case('o'):
// sum=sum+15*(i+1);
// break;
// case('u'):
// sum=sum+21*(i+1);
// break;

// }
// }
// cout<<sum<<endl;
// }
// #define _USE_MATH_DEFINES
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long double r;
//     cin>>r;
//     long double etc=(M_PI*r*r)/2;
//     cout<<fixed<<setprecision(8)<<etc<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long int n,k;
//     cin>>n>>k;
//     int a[n];
//     int b[n];  
//     for (int i=0;i<n;i++)
//     cin>>a[i];
//     int txor=a[0];
//     for(int i=1;i<k;i++)
// {
// txor=txor^a[i];
// }
// b[0]=txor;
// // cout<<txor;
//     for(int i=1;i<=n-k;i++)
//     {
// txor=txor^a[i-1];
// txor=txor^a[i-1+k];
// b[i]=txor;
//     }
//     int max=b[0];
//     for(int i=1;i<=n-k;i++)
//     {
//         if(b[i]>max)
//         max=b[i];
//     }
//     cout<<max;
    
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum=sum+a[i];

    }
int k=sum/4;
int count=0;
int l=0;
for(int i=0;i<n;i++)
{
    l=l+a[i];
    if(l<)
    
}

}