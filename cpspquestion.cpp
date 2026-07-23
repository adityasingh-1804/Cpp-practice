#include <iostream>
using namespace std;

int main() {
    int cp,sp;
    cout<<"enter the cost price: ";
    cin>>cp;
     cout<<"enter the selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit is: "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"loss is: "<<cp-sp;
    }
    else{
        cout<<"no profit no loss";
    }

 
  return 0;
}