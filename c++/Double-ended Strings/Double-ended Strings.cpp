#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        int longest = 0;

        for (int i = 0; i < a.length(); i++) {
            for (int j = 0; j < b.length(); j++) {

                int k = 0;

                while (i + k < a.length() &&
                       j + k < b.length() &&
                       a[i + k] == b[j + k]) {
                    k++;
                }

                longest = max(longest, k);
            }
        }

        int ans = a.length() + b.length() - 2 * longest;

        cout << ans << endl;
    }

    return 0;
}
