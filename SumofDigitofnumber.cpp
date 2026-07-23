#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Value of n : ";
    cin>> n;
    int sum=0;
    while(n!=0){
        int lastdig = n%10;
        n=n/10;
        sum=sum+lastdig;
       
    }
    cout<< sum;
  return 0;
}