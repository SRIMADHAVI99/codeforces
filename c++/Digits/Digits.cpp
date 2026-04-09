#include <iostream>
using namespace std;

int main()
{
    int N;
    long long n;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> n;
        if(n == 0){
            cout << n;
        }
        while(n > 0){
            cout << n % 10 << " ";
            n = n / 10;  
        }
        cout << endl;
    }
    return 0;
}
