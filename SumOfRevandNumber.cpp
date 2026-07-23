#include <iostream>
using namespace std;

int main() {
    int n,n2;
    cout<<"Enter the value of N";
    cin>> n;
    int rev=0;
    int sum=0; 
    n2=n;   
    while(n!=0){
        int lstdigit;
      lstdigit=n%10;
        rev=rev*10;
        rev=rev+lstdigit;
        n=n/10;

    }
    
    cout<<  rev;
    cout<< endl;
  sum= n2+rev;
  cout<< sum;
    
  return 0;
}