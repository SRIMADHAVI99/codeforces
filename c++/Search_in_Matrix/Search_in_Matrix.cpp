#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
int main()
{
    int N, M, element;
    cin >> N >> M;
    
    vector<vector<int>> Matrix(N, vector<int>(M));
    
    for(int i = 0; i < N; i++){
        
        for(int j = 0; j < M; j++){
        cin >> Matrix[i][j];
        }
    }
    
    cin >> element;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(Matrix[i][j] == element){
                cout << "will not take number";
                return 0;
            }
        }
    }
    cout <<"will  take number";
    return 0;
}
