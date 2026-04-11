#include <iostream>
using namespace std;
 
int main()
{
    int N, M, n;
    cin >> n;
    for(int j = 1; j <= n; j++){
        cin >> N >> M;
        int sum = 0;
        int start = min(N, M);
        int end = max(N,M);
        for(int i = start + 1; i < end; i++){
            if(i % 2 != 0){
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
