/*Made by Abhishek Agarwal */
#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
#define bint mp::cpp_int
#define pb push_back;
#define lli bint
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
#define MOD 1000000007

lli power(lli a, lli b)
{
    lli temp;
    if (b == 0)
        return 1;
    temp = power(a, b / 2);
    if (b % 2 == 0)
        return temp * temp;
    else
        return a * temp * temp;
}
int main()
{
    fastio;
    lli t, n, k, m, i, x, fn, fd;
    cin >> x;
    t = x;
    while (t--)
    {
        cin >> n >> k >> m;
        if (m % 2 != 0)
        {
            fn = power(n, ((m + 1) / 2)) - power(n - 1, ((m + 1) / 2));
            fd = power(n, ((m + 1) / 2));
        }
        else
        {
            fn = power(n - 1, m / 2) + (((k + n) * power(n, m / 2)) - ((k + n) * power(n - 1, m / 2)));
            fd = (k + n) * power(n, m / 2);
        }

        lli lala = gcd(fn, fd);
        fn = fn / lala;
        fd = fd / lala;
        cout << (((fn % MOD) * (modInverse(fd, MOD) % MOD)) % MOD) << endl;
    }
    return 0;
}
//Partially solved