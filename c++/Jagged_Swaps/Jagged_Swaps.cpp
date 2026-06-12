#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	
	for(int i = 0; i < t; i++){
	    
		cin >> n;
		vector <int> a(n);
		
		for(int j = 0; j < n; j++){
			cin >> a[j];
		}
		
		if(a[0] == 1){
		    cout << "YES" << endl ;
		}
		
		else{
		    cout << "NO" << endl ;
		}
	}
	return 0;
}
