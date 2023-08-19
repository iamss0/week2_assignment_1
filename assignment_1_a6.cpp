// If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.
// Input 1: A = 23 , B = 34 , C = 71
// Output : ‘A’ has the least marks.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter marks for 3 students A,B,C: ";
    cin>>a>>b>>c;
    if (a<b)
    {
        if (a<c)
        {
            cout<<"A has got least marks";
        }
        else
        {
            cout<<"C has got least marks";
        }
        
        
    }
    else if (b<a)
    {
        if (b<c)
        {
            cout<<"B has got least marks";
        }
        else
        {
            cout<<"C has got least marks";
        }
    }
    
}