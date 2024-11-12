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
    ll n, k;
    cin >> n >> k;
    ll l = k, r = k + n - 1;

    while (l <= r)
    {
        ll mid1 = l + (r - l) / 3;
        ll mid2 = r - (r - l) / 3;

        ll lmid = abs((mid1 - k + 1) * (k + mid1) / 2 - (n - mid1 + k - 1) * (k + n + mid1) / 2);
        ll rmid = abs((mid2 - k + 1) * (k + mid2) / 2 - (n - mid2 + k - 1) * (k + n + mid2) / 2);

        if (lmid < rmid)
            r = mid2 - 1;
        else if (lmid > rmid)
            l = mid1 + 1;
        else
            l = mid1 + 1, r = mid2 - 1;
    }

    ll ans1 = abs((l - 1 - k + 1) * (k + l - 1) / 2 - (n - (l - 1) + k - 1) * (k + n + (l - 1)) / 2);
    ll ans2 = abs((r + 1 - k + 1) * (k + r + 1) / 2 - (n - (r + 1) + k - 1) * (k + n + (r + 1)) / 2);

    cout << min(ans1, ans2) << endl;
}

int main()
{
    Ramu;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}