#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        if (c == 'g') {
            cout << 0 << endl;
            continue;
        }

        string ss = s + s;

        int lastG = -1;
        int ans = 0;

        for (int i = 2 * n - 1; i >= 0; i--) {

            if (ss[i] == 'g') {
                lastG = i;
            }

            if (ss[i] == c && lastG != -1) {
                ans = max(ans, lastG - i);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
