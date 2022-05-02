#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll cx = x * 100;
    ll cy = y * 10;
    if (cy <= cx)
    {
        cout << "Cloth" << endl;
    }
    else
    {
        cout << "Disposable" << endl;
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