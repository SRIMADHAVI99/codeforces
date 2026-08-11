#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n * k);

        for (int i = 0; i < n * k; i++) {
            cin >> a[i];
        }

        int median = (n + 1) / 2;

        int index = n * k - (n - median) - 1;

        long long ans = 0;

        for (int i = 0; i < k; i++) {
            ans += a[index];
            index -= n - median + 1;
        }

        cout << ans << endl;
    }

    return 0;
}
