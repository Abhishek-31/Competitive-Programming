/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
using namespace std;
int main()
{
    fastio;
    long long int t;
    long long int a[26];
    long long int count;
    cin>>t;
    while(t--)
    {
        count=0;
        char s[1000001];
        cin>>s;
        
        for(int i=0;i<26;i++)
        a[i]=0;
        // for (int i = 0; i < 26; i++)
        // cout<<a[i];
        // cout<<endl;
        for (int i = 0; s[i] != '\0'; i++)
               count++;
// cout<<count<<endl;
        for (int i = 0; i < count; i++)
            a[s[i] - 65]++;
        sort(a, a + 26, greater<int>());
        // for(int i=0;i<26;i++)
        // cout<<a[i];
        // cout<<endl;
        long long int g = INT_MAX;
// cout<<g<<endl;
        long long int len;
        if (count > 26)
            len = 26;
        else
        {
            len = count;
}
// cout<<len;
//LOOP FOR MAIN FUNCTION
for(int j=1;j<=len;j++)
{
    int flag=0;
    if(count%j==0)
    {
        for(int k=0;k<j;k++)
        {
            if((count/j)-a[k]>0)
            {
                // cout<<j<<" ";
                flag=flag+(count/j)-a[k];
            }
        }
        // cout<<flag;
        // cout<<endl;
        if(g>flag)
        g=flag;

    }
}

cout<<g<<endl;
    }
    // return 0;
}