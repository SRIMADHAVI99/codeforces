#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = s.length();

        int zero = 0;
        int one = 0;

        for (char c : s) {
            if (c == '0')
                zero++;
            else
                one++;
        }

        int needZero = 0;
        int needOne = 0;
        int keep = 0;

        for (int i = 0; i < n; i++) {

            if (s[i] == '0')
                needOne++;
            else
                needZero++;

            if (needZero <= zero && needOne <= one) {
                keep++;
            }
            else {
                break;
            }
        }

        cout << n - keep << endl;
    }

    return 0;
}
