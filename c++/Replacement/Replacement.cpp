#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, n;
    cin >> N;
    
    vector<int> v(N);
    
    for(int i = 0; i < N; i++){
       cin >> v[i];
       if(v[i] < 0){
           cout << 2 << " ";
       }
       else if(v[i] == 0){
           cout << 0 << " ";
       }
       else{
           cout << 1 << " ";
       }
    }
    
    return 0;
}
