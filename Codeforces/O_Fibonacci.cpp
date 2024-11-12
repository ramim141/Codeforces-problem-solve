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

void solve()
{
    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    else if (n == 2)
    {
        cout << 1 << endl;
        return;
    }

    vll v(55);
    v[0] = 0;
    v[1] = 1;

    for (ll i = 2; i < n; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }

    cout << v[n - 1] << endl;
}

int main()
{
    Ramu int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}