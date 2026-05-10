#include <iostream>
using namespace std;

int main()
{
    int A, B;
    string S;
    
    cin >> A >> B;
    cin >> S;
    
    if(S[A] != '-'){
        cout << "No";
        return 0;
    }
    
    for(int i = 0; i < S.size(); i++){
        
        if(i == A)
          continue; 
          
        if(!(S[i] >= '0' && S[i] <= '9'))
        {
            cout << "No";
            return 0;
        }
    }
    
    cout << "Yes";
    
    return 0;
}
