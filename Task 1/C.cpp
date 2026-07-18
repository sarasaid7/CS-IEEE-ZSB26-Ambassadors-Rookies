#include <iostream>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    for (int n = 1; ; n++) {
        int total = n * k;
        if (total % 10 == 0 || total % 10 == r) {
            cout << n << '\n';
            break;
        }
    }

    return 0;
}
