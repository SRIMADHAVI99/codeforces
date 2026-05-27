#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int left = 0, right = N - 1;

    while(left <= right){
        cout << A[left] << " ";
        left++;

        if(left <= right){
            cout << A[right] << " ";
            right--;
        }
    }
	return 0;
}
