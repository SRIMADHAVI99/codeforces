#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k, b, s;
        cin >> n >> k >> b >> s;

        long long base = b * k;
        long long extra = s - base;

        if (extra < 0 || extra > 1LL * n * (k - 1)) {
            cout << -1 << endl;
            continue;
        }

        vector<long long> a(n, 0);

        a[0] = base;

        for (int i = 0; i < n; i++) {
            long long add = min(extra, k - 1);

            a[i] += add;
            extra -= add;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
