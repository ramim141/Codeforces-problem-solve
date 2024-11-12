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
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            str.erase(i, 3);
            str.insert(i, " ");
            i--;
        }
    }

    stringstream ss(str);
    string ans, ws;
    while (ss >> ws)
    {
        if (!ans.empty())
            ans += " ";
        ans += ws;
    }

    cout << ans << endl;
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
