#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int>A(N);
    vector<int>B(N);
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    for(int j = 0; j < N; j++){
        cin >> B[j];
    }
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    if(A == B){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}
