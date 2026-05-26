#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    vector<int> A(N);
 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int pattern1 = 0;
    int pattern2 = 0;

    for (int i = 0; i < N; i++) {

        if (i % 2 == 0) {
            if (A[i] < 0)
                pattern1++;
        } 
        else {
            if (A[i] > 0)
                pattern1++;
        }

        if (i % 2 == 0) {
            if (A[i] > 0)
                pattern2++;
        }
        else {
            if (A[i] < 0)
                pattern2++;
        }
    }

    cout << min(pattern1, pattern2);
    
    return 0;
}
