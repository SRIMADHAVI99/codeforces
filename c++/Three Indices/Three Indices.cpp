#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> leftMin(n);
        vector<int> rightMin(n);

        leftMin[0] = 0;

        for (int i = 1; i < n; i++) {
            if (p[i] < p[leftMin[i - 1]])
                leftMin[i] = i;
            else
                leftMin[i] = leftMin[i - 1];
        }

        rightMin[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            if (p[i] < p[rightMin[i + 1]])
                rightMin[i] = i;
            else
                rightMin[i] = rightMin[i + 1];
        }

        int found = 0;

        for (int j = 1; j < n - 1; j++) {

            int i = leftMin[j - 1];
            int k = rightMin[j + 1];

            if (p[i] < p[j] && p[j] > p[k]) {
                cout << "YES" << endl;
                cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;

                found = 1;
                break;
            }
        }

        if (found == 0) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
