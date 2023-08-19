// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.
// Input 1: length = 5 breadth = 7

// Output 1: Area is greater than perimeter.

#include<iostream>
using namespace std;
int main(){
    float length, breadth;
    cout<<"Enter a value for length and breadth: ";
    cin>>length>>breadth;
    float perimeter = 2 * (length+breadth);
    float area = length*breadth;
    if (perimeter>area)
    {
        cout<<"Perimeter > Area";
    }
    else if (perimeter=area)
    {
        cout<<"Perimeter = Area";
    }
    else
    {
        cout<<"Perimeter < Area";
    }
    
    
}
