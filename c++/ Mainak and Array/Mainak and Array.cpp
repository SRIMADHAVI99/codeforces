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

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int ans = a[n] - a[1];

        for (int i = 2; i <= n; i++)
            ans = max(ans, a[i] - a[1]);

        for (int i = 1; i < n; i++)
            ans = max(ans, a[n] - a[i]);

        for (int i = 1; i < n; i++)
            ans = max(ans, a[i] - a[i + 1]);

        cout << ans << "\n";
    }

    return 0;
}
