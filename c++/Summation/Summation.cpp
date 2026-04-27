#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long N, sum = 0;
    cin >> N;
    vector <int> v(N);
    
    for(int i = 0; i < N; i++){
        cin >> v[i];
        sum += v[i];
    }
    
    if (sum < 0){
        sum = -sum;;
    }
    
    cout << sum << endl;
    
    return 0;
}
