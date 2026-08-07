#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0 0\n";
            continue;
        }

        long long d = abs(a - b);
        long long rem = a % d;

        cout << d << " " << min(rem, d - rem) << "\n";
    }

    return 0;
}
