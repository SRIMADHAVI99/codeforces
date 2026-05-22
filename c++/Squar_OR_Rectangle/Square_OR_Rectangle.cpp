#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    vector<int> A(N);
    vector<int> B(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        cin >> B[i];
    }
    for(int i = 0; i < N; i++){
        if(A[i] == B[i]){
            cout << "Square" << endl;
        }
        else{
            cout << "Rectangle" << endl;
        }
    }
    
    return 0;
}
