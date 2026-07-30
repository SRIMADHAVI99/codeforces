#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--){
        string s, t;
        cin >> s >> t;

        int j = t.length() - 1;
        int flag = 0;

        for (int i = s.length() - 1; i >= 0; i--) {

            if(j >= 0 && s[i] == t[j]){
                j--;
            }
            else{
                for (int k = 0; k <= j; k++){
                    if(s[i] == t[k]){
                        cout << "NO" << endl;
                        flag = 1;
                        break;
                    }
                }

                if(flag)
                    break;
            }
        }

        if(flag)
            continue;

        if(j == -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
