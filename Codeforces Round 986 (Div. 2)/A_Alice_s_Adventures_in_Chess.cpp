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
    int x = 0, y = 0;
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    bool ok = false;
    for (int i = 0; i < 1000; i++)
    {

        if (s[i % n] == 'N')
        {
            y += 1;
        }
        else if (s[i % n] == 'E')
        {
            x += 1;
        }
        else if (s[i % n] == 'S')
        {
            y -= 1;
        }
        else if (s[i % n] == 'W')
        {
            x -= 1;
        }
        if (x == a && y == b)
        {
            ok = true;
            break;
        }
    }
    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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