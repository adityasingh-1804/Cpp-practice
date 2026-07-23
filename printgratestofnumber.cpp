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
    if (a>b && a>c){
        cout << "a is the gratest number";
    }
    else if (b>a && b>c){
        cout<< " b is the gratest number";

    }
    else{
        cout<< " c is gratest number";
    }
    
  return 0;
}
