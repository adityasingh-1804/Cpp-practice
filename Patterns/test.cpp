#include <iostream>
using namespace std;

int main() {
  int n,m;
  cout<< "enter the value of N: ";// Enter the rows
  cin>> n;
  int a=1;
  for(int i=a;i<=n;i++){
    for(int j=a;j<=i;j++){
        cout<<  a<<" ";
      
    }
    cout<< endl;
  }


  return 0;
}