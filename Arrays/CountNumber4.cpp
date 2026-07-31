#include<iostream>
using namespace std;
int main(){
    int count=0,x=4;
    int arr[5]={2,4,8,1,7};
    
    //updating values
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            count++;
            
        }
        
 
    }
   cout<< count<<" ";
}