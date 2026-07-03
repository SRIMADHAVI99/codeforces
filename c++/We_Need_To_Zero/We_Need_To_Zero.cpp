#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector <int> a(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int x_or = 0;
        
        for(int i = 0; i < n; i++){
            x_or = x_or ^ a[i];
        }
        
        if(n % 2 == 1){
            cout << x_or << endl;
        }
        
        else{
            if(x_or == 0){
                cout << 0 << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
