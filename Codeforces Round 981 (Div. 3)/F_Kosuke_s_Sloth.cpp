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
const int MOD = 1e9 + 7;
void solve()
{
    ll n, k;
    cin >> n >> k;

    if (k == 1)
    {
        cout << n % MOD << endl;
        return;
    }

    int n1 = 1 % k, n2 = 1 % k;
    int idx = 2;

    while (true)
    {
        idx++;
        int n3 = (n1 + n2) % k;

        if (n3 == 0)
        {
            cout << ((n % MOD) * (idx % MOD)) % MOD << endl;
            return;
        }

        n1 = n2;
        n2 = n3;
    }
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