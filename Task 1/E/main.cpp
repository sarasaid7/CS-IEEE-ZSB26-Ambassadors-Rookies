#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long total = n * (n + 1) / 2;
    if (total % 2)
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    vector<int> first, second;
    if (n % 4 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 4 == 1 || i % 4 == 0) first.push_back(i);
            else second.push_back(i);
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 4 == 1 || i % 4 == 2) first.push_back(i);
            else second.push_back(i);
        }
    }
    cout << first.size() << "\n";
    for (int x : first) cout << x << " ";
    cout << "\n";
    cout << second.size() << "\n";
    for (int x : second) cout << x << " ";
    cout << "\n";
    return 0;
}
