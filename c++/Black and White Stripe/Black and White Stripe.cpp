#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int countW = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == 'W')
                countW++;
        }

        int ans = countW;

        for (int i = k; i < n; i++) {

            if (s[i] == 'W')
                countW++;

            if (s[i - k] == 'W')
                countW--;

            ans = min(ans, countW);
        }

        cout << ans << endl;
    }

    return 0;
}
