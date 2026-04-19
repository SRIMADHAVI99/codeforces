#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    c = a - b;
    if(c >= 0){
        cout << a - b;
    }
    else{
        cout << 0;
    }
    return 0;
}
