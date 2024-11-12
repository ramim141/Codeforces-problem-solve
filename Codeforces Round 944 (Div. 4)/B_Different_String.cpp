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
    string s;
    cin >> s;

    // set<char> st(s.begin(), s.end());

    // if (st.size() == 1)
    // {

    //     cout << "NO" << endl;
    // }
    // else
    // {

    //     cout << "YES" << endl;

    //     sort(s.begin(), s.end());
    //     cout << s << endl;
    // }

    bool ok = false;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[0])
        {
            swap(s[0], s[i]);
            ok = true;
            break;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "NO" << endl;
       
        // sort(s.begin(), s.end());
        
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