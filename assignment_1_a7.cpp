// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
// Input 1: 2 0
// Output 1: the point lies on the x - axis.

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter coordinates x and y (x,y): ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"The point is on origin";
    }
    else if(x==0){
        cout<<"The point is on y-axis";
    }
    else if (y==0)
    {
        cout<<"The point is on x-axis";
    }
    
}