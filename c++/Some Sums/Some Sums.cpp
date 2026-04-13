#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int total = 0;
    for(int i = A; i <= N; i++){
        int temp = i;
        int sum =0;
        while(temp > 0){
            sum += temp % 10;
            temp = temp / 10;
        }
        if(sum >= A && sum <= B){
            total = total + i;
        }
    }
    cout << total;
    return 0;
}
