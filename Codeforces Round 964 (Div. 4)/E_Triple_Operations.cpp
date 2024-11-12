#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvs vector<string>
#define vvb vector<vector<bool>>
#define vvvi vector<vector<vector<int>>>
#define si set<int>
#define sl set<ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define Ramu                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define MX 200001
vll v(MX, 0);

void p()
{
    for (ll i = 1; i < MX; i++)
    {
        ll cnt = 0;
        ll x = i;
        while (x != 0)
        {
            x /= 3;
            cnt++;
        }
        v[i] = cnt;
    }
    for (ll i = 1; i < MX; i++)
    {
        v[i] += v[i - 1];
    }
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll temp = l;

    while (temp != 0)
    {
        ans++;
        temp /= 3;
    }

    ans *= 2;
    ans += (v[r] - v[l]);
    cout << ans << endl;
}

int main()
{
    Ramu;

    p();

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
