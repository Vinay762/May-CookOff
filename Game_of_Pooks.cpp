#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n <= 3)
    {
        cout << n - 1 << endl;
    }
    else
    {
        cout << n << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}