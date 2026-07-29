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
       
       vector <long long> a(n);
       
       for(int i = 0; i < n; i++){
           cin >> a[i];
       }
       
       if(n == 1){
           cout << 0 << endl;
           continue;
       }
       
       int count = 0;
       
       for(int i = n - 2; i >= 0; i--){
            while(a[i] >= a[i + 1]){
                if (a[i] == 0){
                    count = -1;
                    break;
                }
                
                a[i] = a[i] / 2;
                count++;
            }
        }
        
        cout << count << endl;

   }
    return 0;
}
