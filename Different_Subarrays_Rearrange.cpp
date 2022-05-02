#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    unordered_map<ll, ll> mp;
    bool flag = false;
    for (auto a : nums)
    {
        mp[a]++;
        if (mp[a] > n / 2)
        {
            flag = true;
        }
    }
    if (flag == true || mp.size() == 2)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    sort(nums.begin(), nums.end());
    for (ll i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (ll i = n / 2; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    for (ll i = 0; i < n / 2; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
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
}