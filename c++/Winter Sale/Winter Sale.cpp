#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   double p,x,disc;
   cin>>x>>p;
   disc=(p*100)/(100-x);
   cout<<fixed<<setprecision(2)<<disc;
   return 0;
}
