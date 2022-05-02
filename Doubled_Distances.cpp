#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
        cin >> nums[i];
    bool flag = false;
    sort(nums.begin(), nums.end());
    for (ll i = 1; i < n - 1; i++)
    {
        ll a = nums[i] - nums[i - 1];
        ll b = nums[i + 1] - nums[i];
        if (2 * a != b && a != 2 * b)
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
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