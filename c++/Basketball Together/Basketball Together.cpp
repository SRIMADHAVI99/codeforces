#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long D;
    cin >> n >> D;

    vector<long long> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.rbegin(), p.rend());

    int ans = 0;
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        long long strongest = p[left];

        long long need = D / strongest + 1;

        if (left + need - 1 > right)
            break;

        ans++;

        left++;
        right -= need - 1;
    }

    cout << ans << endl;

    return 0;
}
