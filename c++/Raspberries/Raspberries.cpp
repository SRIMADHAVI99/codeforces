#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = k;
        int even = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0)
                even++;

            int operations = (k - a[i] % k) % k;
            ans = min(ans, operations);
        }

        if (k == 4) {
            if (even >= 2)
                ans = 0;
            else if (even == 1)
                ans = min(ans, 1);
            else
                ans = min(ans, 2);
        }

        cout << ans << endl;
    }

    return 0;
}
