#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<long long> a(N + 1);
    vector<long long> prefix(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;

        cout << prefix[R] - prefix[L - 1] << endl;
    }

    return 0;
}
