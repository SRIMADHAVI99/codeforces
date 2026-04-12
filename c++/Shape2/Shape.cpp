#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int s = 1; s <= N - i; s++){
            cout << " " ;
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int z = 1; z <= i - 1; z++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
