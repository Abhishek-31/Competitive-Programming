/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 

int gcd(long int a, long int b)
{
    // Everything divides 0
    if (a == 0 || b == 0)
        return 0;

    // Base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int lcm(long long int a, long long int b)
{
    return (a*b) / gcd(a, b);
}
int main()
{
    fastio;
    long long int t, n, a, b, k, ans;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b >> k;
        ans = n / a;
        ans = ans + (n / b);

        ans = ans - 2 * (n / lcm(a, b));
        //  cout<<ans;
        if (ans >= k)
            cout << "Win"
                 << "\n";
        else
        {
            cout << "Lose"
                 << "\n";
        }
    }
    return 0;
}

//It worked.
