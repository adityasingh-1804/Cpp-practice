#include <iostream>
using namespace std;

int main() {
    int i,n;
    cout<< " Enter the value of n: ";
    cin>> n;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<" this is composit number";
            break;
        }
        else{
            cout<<" prime number";
            break;
        }
    }
    
  return 0;
}