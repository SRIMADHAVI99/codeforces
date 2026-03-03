#include <iostream>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    string s=to_string(a);
    char first_digit=s[0];
    if(first_digit%2==0){
        cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }
    return 0;
}
