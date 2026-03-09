#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a,b,c,d;
    double power1,power2;
    cin>>a>>b>>c>>d;
    power1= b*log(a);
    power2= d*log(c);;
    if(power1>power2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
