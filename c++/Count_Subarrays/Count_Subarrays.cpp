#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long long N, n;
    cin >> N;
    
    for(int j = 0; j < N; j++){
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long c = 1, count = 1;
        for(int i = 1; i < n; i++){
            if(a[i] > a[i-1]){
                c++;
            }
            else{
                c = 1;
            }
            count = count + c;
        }
        cout << count << endl;
    }
    return 0;
}
