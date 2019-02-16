/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
#define pb push_back;
#define  lli unsigned long long int
lli modInverse(lli a, lli m)
{
    lli m0 = m;
    lli y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {
        lli q = a / m;
        lli t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}
lli gcd(lli a, lli b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main() 
{ 
fastio; 
lli t,n,k,m,i,x,fn,fd; 
cin>>x;
t=x; 
while(t--) 
{
    cin>>n>>k>>m;
     vector <int> num;
    vector<int> den;
if(m%2!=0)
{
for(i=0;i<((m/2)+1);i++)
{
num.push_back(pow(n-1,i));
den.push_back(pow(n,i+1));
}
}

else{
    for (i = 0; i < (((m-1) / 2) + 1); i++)
    {
        num.push_back(pow(n - 1, i));
        den.push_back(pow(n, i + 1));
    }
    num.push_back(pow(n-1,i));
    den.push_back(pow(n,i)*(n+k));
}

fn=0;
for(i=0;i<num.size();i++)
{
    fn=fn+num[i]*den[den.size()-1]/den[i];
}
fd=den[den.size()-1];
lli lala=gcd(fn,fd);
fn=fn/lala;
fd=fd/lala;
cout << ((fn % 1000000007) * (modInverse(fd, 1000000007)% 1000000007)) % 1000000007 << endl;
}
return 0;
}