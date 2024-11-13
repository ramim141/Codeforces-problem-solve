#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool ok = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (!isupper(s[i]))
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        for (char &ch : s)
        {
            ch = (isupper(ch)) ? tolower(ch) : toupper(ch);
        }
    }

    cout << s << endl;
    return 0;
}
