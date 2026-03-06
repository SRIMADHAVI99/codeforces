#include <iostream>
using namespace std;
int main()
{
    double N,decimal; 
    cin>>N;
    if(N==(long long)N){
        cout<<"int "<<N;
    }
    else{
        cout<<"float "<<(int)N<<" "<<N - int(N);
    }
    return 0;
}
