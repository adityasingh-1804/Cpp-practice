#include<iostream>
using namespace std;
void greet(){
    cout<< " hii"<< endl;
    greet();
}
int main (){
    greet(); 
    cout<< " helo";
}