#include <iostream>
using namespace std;

int main() {
    float x,y;
    cout<<" enter the x point: ";
    cin>>x;
    cout<<" enter the y point;";
    cin>>y;
    if(x>0 && y>0){
        cout<<" the point is in first quadrnt";
    }
    else if(x<0 && y>0){
        cout<< "the point is in secound quadrant";

    }
    else if(x<0 && y<0){
        cout<< " the points are in 3 quadrant";
    }
    else if(x>0 && y<0){
         cout<< "the point is in 4 qadrant";}
    else if (x==0 && y==0){
    cout<< "the point is in origin";}
  return 0;
}