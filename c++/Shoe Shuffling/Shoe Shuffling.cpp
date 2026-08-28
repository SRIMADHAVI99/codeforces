#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        vector<int> p(n);
        bool possible = true;

        int i = 0;

        while (i < n) {
            int j = i;

            while (j < n && s[j] == s[i]) {
                j++;
            }

            if (j - i == 1) {
                possible = false;
                break;
            }

            for (int k = i; k < j - 1; k++) {
                p[k] = k + 2;
            }
            p[j - 1] = i + 1;

            i = j;
        }

        if (!possible) {
            cout << -1 << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
