#include <iostream>
using namespace std;

int main()
{
    int N, j;
    cin >> N;
    for(int i = 1; i <= 12; i++){
        while(j = i*N){
            cout << N << " * " << i << " = " << j << endl;
            break;
        }
    }
    return 0;
} 
