#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long d = 0;

        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                d = i;
                break;
            }
        }

        if (d == 0)
            d = n;

        cout << n / d << " " << n - n / d << endl;
    }

    return 0;
}
