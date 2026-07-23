#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Value of n : ";
    cin>> n;
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
       
    }
    cout<< count;
  return 0;
}