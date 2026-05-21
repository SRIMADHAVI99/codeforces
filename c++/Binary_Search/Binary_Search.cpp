#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    unordered_set<long long> s;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    while (Q--) {
        long long X;
        cin >> X;

        if (s.count(X))
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}
