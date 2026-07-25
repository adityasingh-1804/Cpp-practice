#include<iostream>
using namespace std;
void greet(){
    cout<< " hello"<< endl;
    greet();
}
int main (){
    greet(); 
}