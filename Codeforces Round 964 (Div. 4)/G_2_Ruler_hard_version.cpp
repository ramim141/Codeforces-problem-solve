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
    int low = 2, high = 999;
    while (low < high)
    {
        int mid1 = (2 * low + high) / 3;
        int mid2 = (2 * high + low) / 3;
        cout << "? " << mid1 << ' ' << mid2 << endl;
        int x;
        cin >> x;
        if (x == mid1 * mid2)
        {
            low = mid2 + 1;
        }
        else if (x == mid1 * (mid2 + 1))
        {
            low = mid1 + 1;
            high = mid2;
        }
        else
        {
            high = mid1;
        }
    }
    cout << "! " << low << endl;
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