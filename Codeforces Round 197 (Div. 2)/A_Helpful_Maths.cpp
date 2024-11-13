#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    bool first = true;
    for (char c : s)
    {
        if (c != '+')
        {
            if (!first)
            {
                cout << "+";
            }
            cout << c;
            first = false;
        }
    }

    cout << endl;

    return 0;
}