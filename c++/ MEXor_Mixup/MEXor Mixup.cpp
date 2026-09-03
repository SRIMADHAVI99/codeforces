#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long x = 0;

        for (int i = 0; i < a; i++) {
            x ^= i;
        }

        if (x == b) {
            cout << a << endl;
        }
        else if ((x ^ b) != a) {
            cout << a + 1 << endl;
        }
        else {
            cout << a + 2 << endl;
        }
    }

    return 0;
}
