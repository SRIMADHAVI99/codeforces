#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
        int n, m;
        cin >> n >> m;
        
        string x, s;
        cin >> x >> s;
        
        int count = 0;
        bool yes = false;
        
        while(count <= 6){
            
            if(x.find(s) != -1){
                cout << count << endl;
                yes = true;
                break;
            }

            x = x + x;
            count++;
        }

        if(!yes){
            cout << -1 << endl;
        }

    }
    return 0;
}
