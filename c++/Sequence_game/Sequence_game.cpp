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
        
        vector <int> b(n);
        vector <int> a;
        
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        
        a.push_back(b[0]);
        
        for (int i = 0; i < n - 1; i++){
            
            if (b[i] <= b[i + 1]){
                a.push_back(b[i + 1]);
            } 
            else{
                a.push_back(1);
                a.push_back(b[i + 1]);
            }
            
        }
        
        cout << a.size() << endl;
        
        for(int i = 0; i < a.size(); i++){
            int x = a[i];
            cout << x << " ";
        }
        
        cout << endl;
    }
    return 0;
}
