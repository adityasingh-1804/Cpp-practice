#include <iostream>
using namespace std;

int main() {
    int i,n;
    cout<< "enter the value of n : ";
    cin>> n;
    int a=1;
    for(i=1;i<=n;i++){
        cout<<a << " ";
        a=a*2;
    }
   
  return 0;
}