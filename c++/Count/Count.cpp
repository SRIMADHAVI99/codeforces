#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    long long sum = 0;

    for (char digit : S) {
        sum += digit - '0';
    }

    cout << sum << endl;

    return 0;
}
