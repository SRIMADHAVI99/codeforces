#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1);
        vector<long long> prefix(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        long long total = prefix[n];

        while (q--) {

            long long l, r, k;
            cin >> l >> r >> k;

            long long removed = prefix[r] - prefix[l - 1];
            long long len = r - l + 1;

            long long newSum = total - removed + len * k;

            if (newSum % 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
