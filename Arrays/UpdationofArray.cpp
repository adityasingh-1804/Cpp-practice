#include<iostream>
using namespace std;

int main (){
    int arr[5]; 
    cout<< "enter the array: ";
    for(int i = 0; i<=4; i++){
        cin>> arr[i];
    }
   
  
   for(int i=0;i<=4;i++){
    cout<< arr[i] <<" " ;

   }
   arr[0]=100;// updating the value.
   cout<< endl;
   
   for(int i=0;i<=4;i++){
    cout<< arr[i] << "  ";
   }
  
    
}