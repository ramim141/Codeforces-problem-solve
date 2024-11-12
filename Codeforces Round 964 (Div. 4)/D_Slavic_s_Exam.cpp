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
    string s, t;
    cin >> s >> t;
    int i = 0;

    for (char c : t)
    {
        while (i < s.size() && s[i] != c && s[i] != '?')
            i++;
        if (i == s.size())
        {
            cout << "NO\n";
            return;
        }
        s[i++] = c;
    }

    cout << "YES\n";
    replace(s.begin() + i, s.end(), '?', 'a');
    cout << s << '\n';
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