#include <iostream>
#include<vector>

using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
        int n, sum = 0, mul = 1, count = 0;
        cin >> n;
        
        vector <int> a(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum = sum + a[i];
            mul = mul * a[i]; 
        }
        
        for(int i = 0; i < n; i++){
            
            if(sum >= 0 && mul == 1){
                break;
            }
            
            if(a[i] == -1){
                a[i] = 1;
                sum = sum + 2;
                mul = mul * -1;
                count++;
            }
            
        }
        
        if(mul == -1){
            count++;
        }
        
        cout << count << endl;
    }

    return 0;
}
