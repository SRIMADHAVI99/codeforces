#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long na = 2 * b - c;
        if (na > 0 && na % a == 0) {
            cout << "YES\n";
            continue;
        }

        long long sum = a + c;
        if (sum % 2 == 0) {
            long long nb = sum / 2;
            if (nb > 0 && nb % b == 0) {
                cout << "YES\n";
                continue;
            }
        }

        long long nc = 2 * b - a;
        if (nc > 0 && nc % c == 0) {
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }

    return 0;
}
