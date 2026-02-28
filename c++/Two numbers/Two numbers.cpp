#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b;
    c=a/b;
    cout<<"floor "<<a <<" / "<<b <<" = "<<floor(c)<<endl;
    cout<<"ceil "<<a <<" / "<<b <<" = "<<ceil(c)<<endl;
    cout<<"round "<<a <<" / "<<b <<" = "<<round(c)<<endl;
    return 0;
}
