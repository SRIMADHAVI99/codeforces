#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 100000;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        ans = min(ans, abs(x));
    }

    cout << ans << endl;

    return 0;
}
