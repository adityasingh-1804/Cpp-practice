#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<" enter the a:";
    cin>>a;
     cout<<" enter the b:";
    cin>>b;
     cout<<" enter the c:";
    cin>>c;
    if (a<b && a<c){
        cout << "a is the least number";
    }
    else if (b<a && b<c){
        cout<< " b is the least number";

    }
    else{
        cout<< " c is least number";
    }
    
  return 0;
}