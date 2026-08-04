#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = 100;

        string target[4] = {"00", "25", "50", "75"};

        for (int k = 0; k < 4; k++) {

            int second = -1, first = -1;

          for (int i = s.length() - 1; i >= 0; i--) {
                if (s[i] == target[k][1]) {
                    second = i;
                    break;
                }
            }

            if (second == -1)
                continue;

            for (int i = second - 1; i >= 0; i--) {
                if (s[i] == target[k][0]) {
                    first = i;
                    break;
                }
            }

            if (first == -1)
                continue;

            int deletions = (s.length() - second - 1) + (second - first - 1);

            ans = min(ans, deletions);
        }

        cout << ans << endl;
    }

    return 0;
}
