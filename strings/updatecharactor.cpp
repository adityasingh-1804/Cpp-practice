#include<iostream>
using namespace std;
int main(){
    string a = "my name is aditya";
    int b=a.length();
    for(int i=0;i<b;i++){
    if(i%2==0){
         a[i]='a';
    }

    }
    cout<< a;
} 