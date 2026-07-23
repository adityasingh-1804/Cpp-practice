#include <iostream>
using namespace std;

int main() {
  int n,m;
  cout<< "enter the value of N: ";// Enter the rows
  cin>> n;
  cout<< "enter the value of M: ";
  cin>> m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(i==1|| i==n){
            cout<< "*"<< " ";

        }
        else if(j==1|| j==m){
            cout<< "*"<<  "       " ;
        }
       
       
       
    }
    cout<< endl;
  }


  return 0;
}