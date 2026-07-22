#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int count = 1, sum = 1;

        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] - a[i] <= k){
                count++;
            }
            else{
                count = 1;
            }

            sum = max(sum, count);
        }

        cout << n - sum << endl;
    }

    return 0;
}
