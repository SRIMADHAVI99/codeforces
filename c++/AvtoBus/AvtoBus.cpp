#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 || n < 4) {
            cout << -1 << "\n";
            continue;
        }

        long long mn = (n % 6 == 0) ? (n / 6) : ((n + 2) / 6);
        long long mx = n / 4;

        if (mn > mx)
            cout << -1 << "\n";
        else
            cout << mn << " " << mx << "\n";
    }

    return 0;
}
