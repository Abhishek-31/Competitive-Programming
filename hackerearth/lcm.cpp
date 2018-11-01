#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
 int t,i,lcm,g,a,b;
 cin>>t;
 while(t--)
 {
     cin>>a>>b;
     if(a==0||b==0)
     lcm=0;
     else
     {
         g=gcd(a,b);
     lcm=a*b;
     lcm=lcm/g;
     }
 cout<<lcm<<endl;

 }

    return 0;
}
