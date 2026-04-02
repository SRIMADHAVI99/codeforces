#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for (int N = 2; N <= n; N++) {
        bool isPrime = true;
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << N << " ";
        }
    }
    return 0;
}
