#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool palindrome = true;

    int left = 0;
    int right = S.length() - 1;

    while (left < right) {
        if (S[left] != S[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (palindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
