#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> s = {a,b,c};
    sort(s.begin(), s.end());
    for (int num : s) { 
        cout << num << "\n"; 
    }
    cout<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
    return 0;
}
