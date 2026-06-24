#include <iostream>
#include <climits>
#include<vector>

using namespace std;
int main()
{
    int t, n;
    cin >> t;
    
    while(t--){
        
        cin >> n;
        vector <int> a(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        bool temp = false;
        
        for(int i = 1; i < n; i++){
            if(a[i]  < a [i -1]){
                temp = true;
                break;
            }
        }
        
        if(temp == true){
            cout << "0" << endl;
        }
        
        else{
            int Diff = INT_MAX;
            
            for(int i = 1; i < n; i++){
                Diff = min(Diff, a[i] - a[i - 1]);
            }
            
            cout << (Diff / 2) + 1 << endl;
        }
    }
    return 0;
}
