#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        
        vector <int> a(n);
        
        int Two = 0, Total = 0;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 2){
                Two++;
            }
        }
        
        if(Two % 2 != 0){
            cout << -1 << endl;
            continue;
        }
        
        if(Two == 0){
            cout << 1 << endl;
            continue;
        }
        
        for(int i = 0; i < n; i++){
            
            if(a[i] == 2){
                Total++;
            }
            if(Total == Two / 2){
                cout << i + 1 << endl;
                break;
            }
            
        }
    }
    return 0;
}
