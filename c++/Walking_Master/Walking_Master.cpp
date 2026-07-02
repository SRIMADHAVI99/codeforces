#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long up = d - b;
        if (up < 0) {
            cout << -1 << '\n';
            continue;
        }

        long long left = up - (c - a);
        if (left < 0) {
            cout << -1 << '\n';
            continue;
        }

        cout << up + left << '\n';
    }

    return 0;
}
