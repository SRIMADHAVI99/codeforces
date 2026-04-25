#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        long long n, s;
        cin >> n >> s;
        long long maxSum = n * (n + 1) / 2;
        if (s > maxSum){
            cout << -1 << endl;
            continue;
        }
        for (int i = n; i >= 1; i--){
            if (s >= i){
                cout << i << " ";
                s -= i;
            }
            if(s == 0)
            break;
        }
        cout << endl;
    }
    return 0;
}
