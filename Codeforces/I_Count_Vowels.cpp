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


int CountVowel(string s, int i = 0)
{
    if (i >= s.length())
    {
        return 0; 
    }

    char ch = tolower(s[i]); 
    int count = (ch == 'a' || ch == 'e' || 
                 ch == 'i' || ch == 'o' || 
                 ch == 'u') ? 1 : 0;

    return count + CountVowel(s, i + 1);
}
void solve()
{
    string s;
    getline(cin, s);

   cout<< CountVowel(s);
    
}
int main()
{
    Ramu int t=1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
