#include <iostream>
using namespace std;

int main()
{
    string S;
    int  N, n;
    cin >> S;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> n;
        for(int j = 1; j <= n; j++){
            cout << S;
        }
        cout << endl;
    }
    return 0;
}
