#include <iostream>

using namespace std;

int main()
{

    int n, m = 0;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            m++;
    }
    cout << m << '\n';

    return 0;
}
