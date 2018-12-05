/*Made by Abhishek Agarwal */
#include <bits/stdc++.h>
using namespace std;
#define fastio         ios_base::sync_with_stdio(false); cin.tie(NULL);                    cout.tie(NULL);
long long int find(long long int a[], long long int co, long long int k, long long int n)
// {cout<<"inside"<<endl;
{
    long long int i = 0, j, max = a[0], max_u = a[0],max2=a[0];
    for (i=0; i <n; i++)
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
    max_u = a[0];
    int z=0;
     for (i = 0; i < n; i++)
    {
        if (max_u > max && max_u <= k)
            max2 = max_u;
        if (a[i] != 0)
            max_u++;

        if (max_u > k || a[i] == 0)
            max_u = 0;
    }
    if (max_u > max2 && max_u <= k)
        max2 = max_u;

}

int main()
{
    fastio;
    long long int t, n, q, k, i, j, co = 0;
    cin >> n >> q >> k;
    long long int a[4 * n];
    char qu[q + 2];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        a[n + i] = a[i];
        a[2 * n + i] = a[i];
        a[3 * n + i] = a[i];
    }
    cin >> qu;
    // cout<<qu<<"\n";
    for (i = 0; qu[i] != '\0'; i++)
    {
        j = i;
        if (qu[i] == '?')
        {

            cout << find(a, co, k, n) << endl;
        }
        else
        {

            co = 0;
            while (qu[j] == '!' && qu[j] != '\0')
            {
                co++;
                j++;
            }
            i = j - 1;
        }
    }

    return 0;
}