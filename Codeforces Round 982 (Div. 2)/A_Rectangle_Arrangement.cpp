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
    int n;
    cin >> n;

    // int wi, hi;
    // cin >> wi >> hi;

    int mxw = 0;
    int mxh = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mxw = max(mxw, x);
        mxh = max(mxh, y);
    }
    cout << 2 * (mxw + mxh) << endl;
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