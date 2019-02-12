#include<bits/stdc++.h>
using namespace std;
long long int gcd(int a,int b)
{
if(b==0)
return a;
else
{
return gcd(b,a%b);
}
    
}
long long int modInverse(long long int a)
{
    a = a % 1000000007;
    long long int x;
    for (x = 1; x < 1000000007; x++)
        if ((a * x) % 1000000007 == 1)
            return x;
}
int findGCD(vector<int> a)
{
    int r = a[0];
    for (int i = 1; i < a.size(); i++)
        r = gcd(a[i], r);

    return r;
}

int main()
{
 int t;
 while(t--)
 {
     long long int z,k,m;
cin>>z>>k>>m;
vector<int> num;
vector<int> den;
long long int n,d;
n=1;
d=z;
if(z>k&&m>1)
{
    int check=z/k;
    z-=k*check;
}
else
{
    num.push_back(1);
    den.push_back(z);
}
for(int i=0;i<m-1;i++)
{
   if(i==m-2)
{
    if(num.size()==0)
{num.push_back(1);
den.push_back(z);
}
else
{
    
}

}
else
{
    if(z>k)
    {
        z-=k;    
    }
}

}
    // cout << modInverse(a, m);
    return 0;
}