#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[105];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            int mx = A[i];

            for (int j = i; j < N; j++) {
                mx = max(mx, A[j]);
                cout << mx << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
