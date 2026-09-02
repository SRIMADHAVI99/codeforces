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

        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i + 1;
        }

        // Larger number of visits first
        sort(a.rbegin(), a.rend());

        vector<int> x(n + 1);
        x[0] = 0;

        long long ans = 0;

        int pos = 1;

        for (int i = 0; i < n; i++) {
            int index = a[i].second;

            if (i % 2 == 0) {
                x[index] = pos;
            }
            else {
                x[index] = -pos;
                pos++;
            }

            ans += 2LL * a[i].first * abs(x[index]);
        }

        cout << ans << endl;

        for (int i = 0; i <= n; i++) {
            cout << x[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
