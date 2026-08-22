#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int left[26] = {};
        int right[26] = {};

        for (char c : s) {
            right[c - 'a']++;
        }

        int leftCount = 0;
        int rightCount = 0;

        for (int i = 0; i < 26; i++) {
            if (right[i] > 0)
                rightCount++;
        }

        int ans = 0;

        for (int i = 0; i < n - 1; i++) {

            int x = s[i] - 'a';

            if (left[x] == 0)
                leftCount++;

            left[x]++;

            right[x]--;

            if (right[x] == 0)
                rightCount--;

            ans = max(ans, leftCount + rightCount);
        }

        cout << ans << endl;
    }

    return 0;
}
