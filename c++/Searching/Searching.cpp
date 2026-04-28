#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, X;
    cin >> N;
    
    vector<int> v(N);

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    
    cin >> X;
    
    for(int i = 0; i < N; i++){
        if(X == v[i]){
            cout << i;
            return 0;
        }
    }
    
    cout << -1;
    return 0;
}
