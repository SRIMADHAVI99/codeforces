#include <iostream>
using namespace std;
 
int main()
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int s = 1; s <= N - i; s++){
            cout << " " ;
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int z = 1; z <= i - 1; z++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = N; i >= 1; i--){
        for(int x = 1; x <= N - i; x++){
            cout << " " ;
        }
        for(int t = i - 1; t >= 1; t--){
            cout << "*";
        }
        for(int y = 1; y <= i; y++){
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}
