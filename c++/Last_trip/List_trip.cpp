#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        
        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        
        int ans = a[0]; 

        for(int j = 1; j < n; j++) {
            ans = max(ans, a[j] - a[j - 1]);
        }

        ans = max(ans, 2 * (x - a[n - 1]));

        cout << ans << endl;

    }
    return 0;
}
