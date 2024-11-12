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
int s = 0;
void Merge(vi &v, int l, int mid, int r)
{
   
    vi temp;
    int left = l;
    int right = mid + 1;
    while (left <= mid && right <= r)
    {
        if (v[left] <= v[right])
        {
            temp.pb(v[left]);
            left++;
            s++;
        }
        else
        {
            temp.pb(v[right]);
            right++;
            s++;
        }
    }
    while (left <= mid)
    {
        temp.pb(v[left]);
        left++;
        s++;
    }
    while (right <= r)
    {
        temp.pb(v[right]);
        right++;
        s++;
    }
    for (int i = l; i <= r; i++)
    {
        v[i] = temp[i - l];
    }
}
void MergeSort(vi &v, int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    MergeSort(v, l, mid);
    MergeSort(v, mid + 1, r);
    Merge(v, l, mid, r);
}
void solve()
{
    int n;
    cin >> n;

    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    MergeSort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    cout<<s;
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
