#include <iostream>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
      int n;
      cin >> n;
      
      string s;
      cin >> s;
      
      while(!s.empty() &&((s.front() == '0' && s.back() =='1') || (s.front() == '1' && s.back() == '0'))){
          s.erase(0, 1);
          s.pop_back();
      }
      
      cout << s.length() << endl;
    }
    return 0;
}
