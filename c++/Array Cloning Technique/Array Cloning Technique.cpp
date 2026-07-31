#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int have = 0;

        for (auto it : freq) {
            have = max(have, it.second);
        }

        int ans = 0;

        while (have < n) {
            ans++;                

            int need = n - have;
            int take = min(have, need);

            ans += take;       
            have += take;
        }

        cout << ans << endl;
    }

    return 0;
}
