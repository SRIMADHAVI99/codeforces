#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long d = 2;

        while (n % d != 0) {
            d++;
        }

        long long a = n / d;
        long long b = n - a;

        cout << a << " " << b << endl;
    }

    return 0;
}
