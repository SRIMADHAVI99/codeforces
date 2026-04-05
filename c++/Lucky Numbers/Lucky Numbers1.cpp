#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    a=n/10;
    b=n%10;
    if((b!=0&&a%b==0)||(a!=0&&b%a==0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
