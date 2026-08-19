#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long q;
        cin >> n >> k >> q;

        long long ans = 0;
        long long count = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x <= q) {
                count++;

                if (count >= k) {
                    ans += count - k + 1;
                }
            }
            else {
                count = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
