#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	
	for(int i = 0; i < t; i++){
	    
		cin >> n;
		vector <int> a(n);
		
		for(int j = 0; j < n ; j++){
			cin >> a[j];
		}
		
		sort(a.begin(), a.end());
		
		int count = 1;
		
		for(int j = 1; j < n ; j++){
		    
            if(a[j] != a[j - 1]){
                count++;
            }
        }

        if(count == 1){
            cout << "Yes" << endl;
        }
        
        else if(count == 2){
            
            int c1 = 1, c2 = 0;
            int temp = a[0];

            for(int j = 1; j < n; j++){
                if(a[j] == temp)
                    c1++;
                else
                    c2++;
            }

            if(c1 - c2 == 1 || c2 - c1 == 1 || c1 == c2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else{
            cout << "No" << endl;
        }
        
	}
            
	return 0;
}
