#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int N;
    cin >> N;
    
    vector<int> v(N);
    
    for(int i = 0; i < N; i++){
       cin >> v[i];
    }
    
    for (int i = 0; i < N/2; i++){
        if (v[i] != v[N-1-i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
