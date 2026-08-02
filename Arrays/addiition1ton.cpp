#include<iostream>
using namespace std;
int main(){
    int arr[4][3]={{1,2,3},{4,6,7},{3,6,7},{4,6,9}};
    int sum=0;
   
   
    // output matrix a
    for(int i=1;i<=2;i++){
        for(int j=1;j<4;j++){
           sum +=arr[i][j];
        }
       
    }
     cout<< sum;
    
}