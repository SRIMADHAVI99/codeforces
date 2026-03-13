#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,d,num1,num2;
    cin>>a>>b>>c>>d;
    num1=max(a,c);
    num2=min(b,d);
    if(num1<= num2)
        cout<<num1<<" "<< num2;
    else{
        cout<<"-1";
    }
    
    return 0;
}
