#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<pair<long long, int>> a;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            x = x % k;

            if (x == 0)
                x = k;

            a.push_back({x, i});
        }

        sort(a.begin(), a.end(), [](pair<long long, int> x,
                                    pair<long long, int> y) {
            if (x.first != y.first)
                return x.first > y.first;

            return x.second < y.second;
        });

        for (auto p : a) {
            cout << p.second << " ";
        }

        cout << endl;
    }

    return 0;
}
