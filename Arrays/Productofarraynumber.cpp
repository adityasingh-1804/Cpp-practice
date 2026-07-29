#include<iostream>
using namespace std;
int main(){
    int arr[5],prod=1;
    cout<< "Enter the Elements in Array: ";
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    for(int i=0;i<5;i++){
        prod=prod*arr[i];
    
    }
    cout<< prod;


}