#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> ca(2 * n + 1, 0);
        vector<int> cb(2 * n + 1, 0);

        int count = 1;

        for (int i = 0; i < n; i++) {
            if (i > 0 && a[i] == a[i - 1])
                count++;
            else
                count = 1;

            ca[a[i]] = max(ca[a[i]], count);
        }

        count = 1;

        for (int i = 0; i < n; i++) {
            if (i > 0 && b[i] == b[i - 1])
                count++;
            else
                count = 1;

            cb[b[i]] = max(cb[b[i]], count);
        }

        int ans = 0;

        for (int x = 1; x <= 2 * n; x++) {
            ans = max(ans, ca[x] + cb[x]);
        }

        cout << ans << endl;
    }

    return 0;
}
