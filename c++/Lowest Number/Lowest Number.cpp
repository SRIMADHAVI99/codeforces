#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
int main()
{
    int N, n = 0, min_num = INT_MAX;
    cin >> N;
    
    vector<int> v(N);
    
    for(int i = 0; i < N; i++){
        cin >> v[i];
        if(v[i] < min_num ){
            min_num = v[i];
            n = i;
        }
    }
    cout << min_num <<" "<< n + 1 << endl;
    return 0;
}
