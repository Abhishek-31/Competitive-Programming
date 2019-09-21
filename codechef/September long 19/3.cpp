#include<bits/stdc++.h>
#define mod 1000000007
#define int long long int
using namespace std;
int nCrModp(int n, int r, int p) 
{ 
    // The array C is going to store last row of 
    // pascal triangle at the end. And last entry 
    // of last row is nCr 
    int C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; // Top row of Pascal Triangle 
  
    // One by constructs remaining rows of Pascal 
    // Triangle from top to bottom 
    for (int i = 1; i <= n; i++) 
    { 
        // Fill entries of current row using previous 
        // row values 
        for (int j = min(i, r); j > 0; j--) 
  
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 
int32_t main()
{
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=0;
    for(int i=1;i<=k;i++)
    {
        // cout<<n<<" "<<k<<" "<<nCrModpLucas(n, k, mod)<<"\n";
        sum=(sum%mod+nCrModp(n, i, mod)%mod)%mod;
    }

cout<<sum+1<<endl;
}
}