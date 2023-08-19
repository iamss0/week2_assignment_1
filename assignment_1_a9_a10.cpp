// Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.
// Input 1: ch = ‘9’
// Output 1: digit
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any char: ";
    cin>>ch;
    int x = int(ch);
    if (x>=48 && x<=57)
    {
        cout<<"DIGIT";
    }
    else if (x>=65 && x<=90)
    {
        cout<<"AlPHABET";
    }
    else{
        cout<<"Special#@!*&^";
    }
    
}
// question number 10
// Predict the output of the below code:

// #include<iostream>
// using namespace std;
// int main() {
// int a = 500, b, c;
// if (a >= 400)
// b = 300;
// c = 200;
// cout << "value of b and c are respectively " << b << " and " << c;
// return 0;
// }

//output: value of b and c are respectively 300 and 200