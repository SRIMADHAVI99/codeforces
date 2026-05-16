#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int sum1 = 0, sum2 = 0;
    
    vector<vector<int>> A(N, vector<int>(N));
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
            
            if (i == j) {
                sum1 += A[i][j];
            }
 
            if (i + j == N - 1) {
                sum2 += A[i][j];
            }
        }
    }
    
    int sub = sum1 - sum2;
    
    if(sub < 0){
        sub = -sub;
    }
    
    cout << sub;
    
    return 0;
}
