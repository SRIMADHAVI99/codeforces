#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   for(int i = 1; i <= 4*n; i++){
       if(i % 4 == 0){
           cout << "PUM" << endl;
       }
       else{
           cout << i << " ";
       }
   }
    return 0;
}
