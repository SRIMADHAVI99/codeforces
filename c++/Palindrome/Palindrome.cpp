#include <iostream>
using namespace std;

int main()
{
    int num, i, rev = 0, n;
    cin >> num;
    n = num;
    do{ 
        i = num % 10;
        rev = (rev*10) + i;
        num = num / 10;
        
    }while (num != 0);{
    if(rev == n){
        cout << rev << endl << "YES";
    }
    else{
        cout << rev << endl << "NO";
    }
    }
    return 0;
}
