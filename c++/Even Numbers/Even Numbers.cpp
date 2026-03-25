#include <iostream>
using namespace std;
 
int main()
{
    long long n, i;
    bool NO;
    cin >> n;
    NO = false;
    for(i = 2; i <= n; i += 2){
        cout << i << endl;
        NO = true;
    }
    if(!NO){
        cout << -1;
    }
    return 0;
}
