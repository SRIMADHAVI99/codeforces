#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 1 || n < 4) {
            cout << -1 << "\n";
            continue;
        }

        long long mn, mx;

        if (n % 6 == 0)
            mn = n / 6;
        else
            mn = (n - 4) / 6 + 1;

        if (n % 4 == 0)
            mx = n / 4;
        else
            mx = (n - 6) / 4 + 1;

        cout << mn << " " << mx << "\n";
    }

    return 0;
}
