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
       if(v[i] <= 10){
           cout<< "A[" << i << "]" <<" = " << v[i] << endl ;
       }
    }
    
    return 0;
}
