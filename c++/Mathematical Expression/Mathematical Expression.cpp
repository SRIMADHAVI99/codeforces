#include <iostream>
using namespace std;
int main()
{
    int a,b;
    double c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if((s=='+'&& a+b==c)||(s=='-'&&a-b==c)||(s=='*'&&a*b==c)){
        cout<<"Yes";
    }
    else if(s=='+'){
        c=a+b;
        cout<<c;
    }
    else if(s=='-'){
        c=a-b;
        cout<<c;
    }
    else{
        c=a*b;
        cout<<c;
    }
    return 0;
}
