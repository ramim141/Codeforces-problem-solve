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
ll sum = 0;
void summation(vll &v, int n, ll sum = 0)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    summation(v, n - 1, sum + v[n - 1]);
}

void solve()
{
    int n;
    cin >> n;

    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    summation(v, n);
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
