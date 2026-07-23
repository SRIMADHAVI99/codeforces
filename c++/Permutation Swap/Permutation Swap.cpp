#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);

        int g = 0;

        for (int i = 1; i <= n; i++) {
            cin >> p[i];

            if (p[i] != i) {
                g = gcd(g, abs(p[i] - i));
            }
        }

        cout << g << endl;
    }

    return 0;
}
