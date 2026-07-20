#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

using int64 = long long;
using i128 = __int128_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const long long LIM = 1000000000000000000LL;

    vector<vector<long long>> L(43, vector<long long>(43, 1));

    // Precompute LCM of every interval [l..r]
    for (int l = 1; l <= 42; l++) {
        long long cur = 1;
        for (int r = l; r <= 42; r++) {
            long long g = gcd(cur, (long long)r);
            i128 nxt = (i128)(cur / g) * r;

            if (nxt > LIM)
                cur = LIM + 1;
            else
                cur = (long long)nxt;

            L[l][r] = cur;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int ans = 1;

        for (int len = 42; len >= 1; len--) {
            bool ok = false;

            for (int l = 1; l + len - 1 <= 42; l++) {
                int r = l + len - 1;

                if (L[l][r] <= LIM && n % L[l][r] == 0) {
                    ans = len;
                    ok = true;
                    break;
                }
            }

            if (ok) break;
        }

        cout << ans << "\n";
    }

    return 0;
}
