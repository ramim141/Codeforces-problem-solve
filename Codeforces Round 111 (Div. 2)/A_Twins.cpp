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
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());

    ll tot_sum = accumulate(v.begin(), v.end(), 0);
    int current_sum = 0;
    int count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    for (int i = 0; i < n; i++)
    {
        current_sum += v[i];
        count++;
        if (current_sum > tot_sum / 2)
        {
            break;
        }
    }

    cout << count << endl;
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