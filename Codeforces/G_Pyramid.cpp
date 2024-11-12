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

void Pyramid(int r, int n)
{

    if (r == 0)
        return;
    Pyramid(r - 1, n);
    for (int i = 1; i <= n - r; i++)
    {
        cout << " ";
    }
    for (int i = 1; i <= 2 * r - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;

    Pyramid(n, n);
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
