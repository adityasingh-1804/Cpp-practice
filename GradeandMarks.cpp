#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<" enter the a: ";
    cin>>a;
    if(a>=81 && a<=100){
        cout<<"VERY GOOD";
    }
    else if(a>=61 && a<=80){
        cout<< "GOOD";
    }
    else if(a>=41 && a<=60){
        cout<<"AVERAGE";
    }
    else{
        cout<<"FAIL";
    }
    
  return 0;
}