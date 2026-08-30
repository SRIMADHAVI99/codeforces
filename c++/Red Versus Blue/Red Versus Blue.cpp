#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        int groups = b + 1;
        int x = r / groups;
        int extra = r % groups;

        for (int i = 0; i < groups; i++) {

            int cnt = x;

            if (extra > 0) {
                cnt++;
                extra--;
            }

            for (int j = 0; j < cnt; j++) {
                cout << 'R';
            }

            if (i < b) {
                cout << 'B';
            }
        }

        cout << endl;
    }

    return 0;
}
