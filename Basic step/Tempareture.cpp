#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double f,c;
    cout<<"Enter temperature in celsius:";
    cin>>c;

    f = 1.8 * c + 32;
    cout<<"The temperature in Fahrenheit:"<<f;
    getch();
}
