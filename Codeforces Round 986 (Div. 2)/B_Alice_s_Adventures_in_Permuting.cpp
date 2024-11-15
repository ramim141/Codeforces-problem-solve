#include <iostream>
using namespace std;

using ll = long long;
int main()
{
    long long int n, b, c;
    int s;
    cin >> s;
    while (s--)
    {
        cin >> n >> b >> c;
        if (b == 0)
        {
            if (c >= n)
            {
                cout << n << endl;
                continue;
            }
            else if (c == n - 1 || c == n - 2)
            {
                cout << n - 1 << endl;
                continue;
            }
            else
            {
                cout << -1 << endl;
                continue;
            }
        }
        else
        {
            if (c >= n)
            {
                cout << n << endl;
                continue;
            }
            else
            {
                cout << n - max(0ll, 1 + (n - c - 1) / b) << endl;
                continue;
            }
        }
    }
    return 0;
}