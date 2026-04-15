#include <iostream>
using namespace std;

int main()
{
    int N, x = 0, y = 1, temp;
    cin >> N;
    for(int i = 1; i <= N ; i++){
      cout << x << " ";
      temp = x + y;
      x = y;
      y = temp;
    }
    return 0;
}
