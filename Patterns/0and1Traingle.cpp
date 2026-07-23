#include <iostream>
using namespace std;

int main() {
  int n,m;
  cout<< "enter the value of N: ";// Enter the rows
  cin>> n;
  cout<< "Enter the values of m: ";// Enter the colunm
  cin>> m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
       if((i+j)%2==0){
        cout<< "1";
       }
       else{
        cout<< "0";
       }
        
    }
    cout<< endl;
  }


  return 0;
}