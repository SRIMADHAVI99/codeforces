#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long a;
        cin >> a;

        long long L = a - x;
        long long R = a + x;

        int changes = 0;

        for (int i = 1; i < n; i++) {
            cin >> a;

            long long newL = a - x;
            long long newR = a + x;

            L = max(L, newL);
            R = min(R, newR);

            if (L > R) {
                changes++;

                L = newL;
                R = newR;
            }
        }

        cout << changes << endl;
    }

    return 0;
}
