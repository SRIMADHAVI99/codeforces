#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int N, count = 0;
    bool even = 1;
    cin >> N;
    vector<int>a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    while(even){
        for(int j = 0; j < N; j++){
            if (a[j] % 2 != 0){
                even = false;
                break;
            }
        }
        if(even){
            for (int k = 0; k < N; k++){
                a[k] = a[k] / 2;
            }
            count++;
        }
    }
    cout << count;
    return 0;
}
