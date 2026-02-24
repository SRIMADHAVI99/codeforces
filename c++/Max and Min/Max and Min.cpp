#include <iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    int max_num=max({a, b, c});
    int min_num=min({a, b, c});
    cout<<min_num <<" "<<max_num;

    return 0;
}
