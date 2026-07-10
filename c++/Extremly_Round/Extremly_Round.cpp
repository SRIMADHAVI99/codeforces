#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        
        string s = to_string(n);
        int digits = s.size();
        int firstDigit = s[0] - '0';
        
        cout << 9 * (digits - 1) + firstDigit << endl;
    }
    return 0;
}
