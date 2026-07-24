#include<iostream>
using namespace std;
int per(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f = f*i;
    }
        return f;
    
}
    int main(){
        int n;
        cout<< "enter the value of n:";
        cin>> n;
        int r;
        cout<< "enter the value of r:";
        cin>> r;
        int a=per(n);
        int b=per((n-r));
        
        cout<< a/b;
       
    }


