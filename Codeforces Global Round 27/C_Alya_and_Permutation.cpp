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

    vi v;
    if (n == 4)
    {
        v = {2, 1, 3, 4};
    }
    else if (n == 6)
    {
        v = {1, 2, 4, 6, 5, 3};
    }
    else
    {
        int x = log2(n);
        int y = (1 << x);

        v.push_back(y);
        v.push_back(y - 1);
        v.push_back(y - 2);
        v.push_back(3);
        v.push_back(1);
        v.push_back(2);

        for (int i = 4; i < y - 2; i++)
            v.push_back(i);
        for (int i = y + 1; i <= n; i++)
            v.push_back(i);

        reverse(v.begin(), v.end());
    }

    if (n % 2)
    {
        v.push_back(n);
        cout << n << '\n';
    }
    else
    {
        int k = (1 << ((int)log2(n) + 1)) - 1;
        cout << k << '\n';
    }

    for (auto i : v)
        cout << i << ' ';
    cout << '\n';
}

int32_t main()
{
    Ramu

        int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}