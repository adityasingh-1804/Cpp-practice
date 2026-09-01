#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,345,2,6,7896};
    int count =0;

    for(int i=0;i<5;i++){
        if(arr[i]%10){
            count++;
        }
       
   
    }
     if(count%2==0){
            cout<<"number is even";
        }
        else
        cout<<"number is odd";

    

}