/*Made by Abhishek Agarwal */
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

void rotate(long long int a[],long long int n)
{
    int x = a[n - 1], i;
    for (i = n - 1; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = x;
}
long long int find(long long int a[], long long int k, long long int n)
// {cout<<"inside"<<endl;
{
    long long int i = 0, j, max = a[0], max_u = a[0];
    for (i = 0; i<n; i++)
    {
        if (max_u > max && max_u <= k)
            max = max_u;
        if (a[i] != 0)
            max_u++;

        if (max_u > k || a[i] == 0)
            max_u = 0;
    }
    if (max_u > max && max_u <= k)
        max = max_u;
    return max;
}

int main()
{
    fastio;
    long long int t, n, q, k, i, j, co = 0;
    cin >> n >> q >> k;
    long long int a[n];
    char qu[q + 2];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> qu;
    // cout<<qu<<"\n";
    for (i = 0; qu[i] != '\0'; i++)
    {
        j = i;
        if (qu[i] == '?')
        {

            cout << find(a, k, n) << endl;
        }
        else
        rotate(a,n);
    }

    return 0;
}