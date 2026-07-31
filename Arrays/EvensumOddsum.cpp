#include<iostream>
using namespace std;
int main(){
    int sumeven=0,sumodd=0;
    int sum=0;
    int arr[5]={2,4,7,8,10};
    //count sumof even and odd number
    for(int i=0;i<5;i++){
        if(i%2==0){
            sumeven+=arr[i]; 
        }
       else{
        sumodd+=arr[i];
       }
          
    }
   sum= sumeven-sumodd;
   cout<< sum;
   

}