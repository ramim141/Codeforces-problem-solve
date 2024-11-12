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

    int d1 = (n / 10000) % 10;
    int d2 = (n / 1000) % 10;
    int d3 = (n / 100) % 10;
    int d4 = (n / 10) % 10;
    int d5 = n % 10;

    int nums = d1 * 10000 + d3 * 1000 + d5 * 100 + d4 * 10 + d2;

    ll ans = 1;
    for (int i = 0; i < 5; i++)
    {
        ans *= nums;
        ans %= 100000;
    }

    printf("%05d\n", ans);
}

int main()
{
    Ramu;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}