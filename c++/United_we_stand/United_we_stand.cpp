#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int mn = 1000000000;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < mn) {
                mn = a[i];
            }
        }

        vector<int> b, c;

        for (int i = 0; i < n; i++) {
            if (a[i] == mn) {
                b.push_back(a[i]);
            } else {
                c.push_back(a[i]);
            }
        }

        if (c.size() == 0) {
            cout << -1 << "\n";
            continue;
        }

        cout << b.size() << " " << c.size() << "\n";

        for (int x : b) {
            cout << x << " ";
        }
        cout << "\n";

        for (int x : c) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
