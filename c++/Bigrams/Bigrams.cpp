#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
        int k, count = 0;
        cin >> k;
        
        bool ok = false;
        
        for(int i = 0 ; i < k; i++){
            
            int c;
            cin >> c;
            
            if(c >= 3){
                ok = true;
            }
            
            if(c >= 2){
                count++;
            }
        }
        
        if(ok || count >= 2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
