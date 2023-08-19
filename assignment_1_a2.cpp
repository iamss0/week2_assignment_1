// Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.
// Input 1: radius = 4
// Output 1: Area is greater than circumference.

#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter a value for radius: ";
    cin>>radius;
    float perimeter = 2 * 3.14 * radius;
    float area = 3.14 * radius * radius;
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
