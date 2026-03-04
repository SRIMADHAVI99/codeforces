#include <iostream>
using namespace std;
int main()
{
    long a,b,c,d,e;
    cin>>a;
    b=a/365;
    cout<<b<<" years"<<"\n";
    c=a-(b*365);
    d=c/30;
    cout<<d<<" months"<<"\n";
    e=c%30;
    cout<<e<<" days";
    return 0;
}
