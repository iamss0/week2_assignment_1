// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.
// Input : side1 = 5 side2 = 4 side3 = 4
// Output: This is an Isosceles triangle.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 int as values for sides of trinagle: ";
    cin>>a>>b>>c;
    if (a+b>c && b+c>a && c+a>b)
    {
        if (a=b=c)
        {
            cout<<"This is an Equilateral trinagle";
        }
        else if (a==b || b==c || c==a)
        {
            cout<<"This is an Isosceles triangle";
        }
        else
        {
            cout<<"This is a Scalene triangle";
        }
        
    }
    else
    {
        cout<<"This is not a triangle";
    }
    
    
}