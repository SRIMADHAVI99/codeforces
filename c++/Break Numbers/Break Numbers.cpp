#include <iostream>
using namespace std;

int main()
{
    int n, max = 0;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        
        long long count = 0;
        long long N;
        cin >> N;
        
        while(N % 2 == 0){
            count++;
            N = N / 2;
        }
        
        if (count > max){
            max = count;
        }
      
    }
    
    cout << max;
    
    return 0;
}
