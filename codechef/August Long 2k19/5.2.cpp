#include<bits/stdc++.h>
#define lli long long int
using namespace std;
#define endl "\n"
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
    std::map<lli,std::vector<lli>> x;
        long long int n;
        cin>>n;
        long long int a[n],b[n];
    for(long long int i=0;i<n;i++)
    cin>>a[i];
    b[0]=a[0];
    lli count=0;
    for(long long int i=1;i<n;i++)
        {b[i]=b[i-1]^a[i];
//   cout<<b[i]<<" ";
        }
        // cout<<endl;
    x[0].push_back(-1);
    for(lli i=0;i<n;i++)
    x[b[i]].push_back(i);
    // for(auto m:x)
    // {
    //     cout<<m.first<<" -> ";
    //     for(auto n:m.second)
    //         cout<<n<<" ";
    // cout<<endl;
    // }

    for(auto m:x)
    {   
        count-=(m.second.size()*(m.second.size()-1))/2;
        for(lli i=0;i<m.second.size();i++)
        {
            count+=(m.second.size()-2*i-1)*m.second[m.second.size()-i-1];
        }
    }
    cout<<count<<endl;
}
}
