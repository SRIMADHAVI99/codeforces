#include <iostream>
using namespace std;

int main()
{
    long long t, L, R, sum;
    cin >> t;
    while(t--){
        cin >> L >> R;
        if(L > R) swap(L, R);
        sum = (R * (R + 1)) / 2 - ((L - 1) * L) / 2;
        cout << sum << endl;
    }
    return 0;
}
