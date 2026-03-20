#include <iostream>
using namespace std;
int main() {
    long long n,k,a,mul,result;
    cin>>n>>k>>a;
    mul=n*k;
    if(mul%a!=0){
        cout<<"double";
    } 
    else{
        result=mul/a;
        if(result<= 2147483647) {
            cout << "int";
        } 
        else {
            cout << "long long";
        }
    }
    return 0;
}
