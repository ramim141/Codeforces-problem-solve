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

void update(vvi &v, int i, int j, int x)
{

    for (int k = 0; k < v.size() - max(i, j); k++)
    {
        v[i + k][j + k] += x;
    }
}

void handleNegative(vvi &v, int i, int j, int &ans)
{
    int add = -v[i][j]; 
    ans += add;         
    for (int k = 0; k < v.size() - max(i, j); k++)
    {
        v[i + k][j + k] += add; 
    }
}
void solve()
{
    int n;
    cin >> n;
    vvi v(n, vi(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    int ans = 0;
  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] < 0)
            {
                handleNegative(v, i, j, ans); 
            }
        }
    }
    cout << ans << endl;
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
