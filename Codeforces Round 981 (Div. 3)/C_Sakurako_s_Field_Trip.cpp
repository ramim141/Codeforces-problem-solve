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

    vi v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 2; i <= n / 2; i++)
    {
        // if (v[i] == v[i - 1] || v[n - i + 1] == v[n - i + 2])

        // {
        //     // swap(v[i], v[n - i + 1]);

        //     // int d_after = 0;
        //     // for (int j = 2; j <= n; j++)
        //     // {
        //     //     if (v[j] == v[j - 1])
        //     //     {
        //     //         d_after++;
        //     //     }
        //     // }

        //     // dis = min(dis, d_after);

        //     // swap(v[i], v[n - i + 1]);
        // }

        if (v[i] == v[i - 1] || v[n - i + 1] == v[n - i + 2])
        {
            swap(v[i], v[n - i + 1]);
        }
            
    }

    int dis = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            dis++;
        }
    }

    cout << dis << '\n';
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
