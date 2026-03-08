#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e=1;
    e=((a%100)*(b%100))%100;
    e=(e*(c%100))%100;
    e=(e*(d%100))%100;
    if(e<10) {
        cout<<"0"<<e;
    }
    else{
        cout<<e;
    }
}
