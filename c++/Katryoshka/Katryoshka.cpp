#include <iostream>
using namespace std;
int main()
{
    long long n,m,k,c,dol1,dol2;
    cin>>n>>m>>k;
    dol1=min(n, min(m, k));
    n=n-dol1;
    m=m-dol1;
    k=k-dol1;
    dol2=min(n / 2, k);
    c=dol1+dol2;
    cout << c;
    return 0;
}
