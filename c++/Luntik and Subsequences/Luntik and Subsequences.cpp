#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long zero = 0, one = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 0)
                zero++;
            else if (x == 1)
                one++;
        }

        long long ans = one;

        for (int i = 0; i < zero; i++) {
            ans *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}
