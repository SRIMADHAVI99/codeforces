#include <iostream>
using namespace std;

int main()
{
    int N, M;
    while (cin >> N >> M){
        if(N <= 0 || M <= 0){
        return 0;
    }
        int  sum = 0;
        int start = min(N, M);
        int end = max(N,M);
        for(int i = start; i <= end; i++){
            sum = sum + i;
            cout << i << " " ;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
