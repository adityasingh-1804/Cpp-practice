#include <iostream>
using namespace std;

int main() {
  int n,i;
  cout<< " Enter the value of N : ";
  cin>> n;
  int fac=1;
  for(i=1;i<=n;i++){
    fac=fac*i;
  }
    cout<< fac;
  return 0;
}