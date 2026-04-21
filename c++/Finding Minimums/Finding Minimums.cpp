#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long N, K, n, temp = LLONG_MAX, count = 0;
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        cin >> n;
        temp = min(n, temp);
        count++;
        if(count == K){
            cout << temp << " ";
            temp = LLONG_MAX;
            count = 0;
        }
    }
    if (count > 0) {
        cout << temp << " ";
    }
    return 0;
}
