#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for(int j = 0; j < N; j++) {

		int n;
		cin >> n;

		string s;
		cin >> s;
		int D = 0, len = 0, value = 0;
		
		for (int i = 0; i < s.length(); i++) {
			
			if (s[i] == '.') {
				D++;
				value++;
				len = max(len, value);
			}
			
			else {
				value = 0;
			}
		}
		
		if (len >= 3){
            cout << 2 << endl;
		}
        else{
            cout << D << endl;
        }
	}

	return 0;
}
