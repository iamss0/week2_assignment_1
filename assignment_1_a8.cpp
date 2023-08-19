// Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three points fall on one straight line.
// Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
// Output 1: All 3 points lie on the same line.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter coordinates first point A(x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter coordinates Second point B(x2,y2): ";
    cin>>x2>>y2;
    cout<<"Enter coordinates thirtd point C(x3,y3): ";
    cin>>x3>>y3;
    float a = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);  
    float b = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);  
    float c = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
    float p = sqrt(a);      
    float q = sqrt(b);      
    float r = sqrt(c);      
    if(p+q==r || q+r==p || r+p==q){
        cout<<"They are on the same line";
    }
    else{
        cout<<"They are non-colinear";
    }
}
