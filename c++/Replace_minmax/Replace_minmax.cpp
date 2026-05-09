#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int min = a[0], max = a[0];
    int minnum = 0, maxinum = 0; 
    
    for(int j = 0; j < n; j++){
        if(a[j] < min){
            min = a[j];
            minnum = j;
        }
        
        if(a[j] > max){
            max = a[j];
            maxinum = j;
        }
    }
    
    int temp = a[minnum];
    a[minnum] = a[maxinum];
    a[maxinum] = temp;
    
    for(int k = 0; k < n; k++){
        cout << a[k] << " ";
    }
    
    return 0;
}
