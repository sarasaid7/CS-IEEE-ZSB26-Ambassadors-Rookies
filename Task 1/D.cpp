#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int cur = 1, mx = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i-1])
            cur++;
        else
            cur = 1;
        if (cur > mx)
            mx = cur;
    }
    cout << mx << '\n';
    return 0;
}
