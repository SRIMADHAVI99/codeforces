#include <iostream>
using namespace std;

int main()
{
    long long t, rows, pos;
    cin >> t;
    rows = t / 4;
    pos = t % 4;
    long long cols= 0;
    if(rows % 2 == 0){
        cols = pos;
    }
    else{
        cols = 3 - pos;
    }
    cout << rows <<" "<<cols ;
  
    return 0;
}
