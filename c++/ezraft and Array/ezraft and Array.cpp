#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        long long sum = 3;
        cin >> n;
        
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        
        if(n == 2){
            cout << -1 << endl;
            continue;
        }
        
        cout << 1 << " " << 2;
        
        for(int i = 3; i <= n; i++){
            cout << " " << sum;
            sum = sum * 2;
        }
        
        cout << endl;
    }
    return 0;
}
