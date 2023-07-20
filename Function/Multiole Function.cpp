#include<iostream>
using namespace std;
// Prototype Function
void addition(int , int );
void subtraction(int , int );
void multipiction(int , int );
void division(int , int );

void addition(int a, int b)
{
    int sum = a+ b;
    cout <<"Value of sumation =" << sum <<endl;
}

void subtraction(int a, int b)
{
    int subtraction = a - b;
    cout <<"Value of subtraction =" << subtraction <<endl;
}

void multipiction(int a, int b)
{
    int multipiction = a * b;
    cout <<"Value of multipiction =" << multipiction <<endl;
}

void division(int a, int b)
{
    float division = (float) a / b;
    cout <<"Value of division =" << division  <<endl;
}

int main()
{
 addition(30,10);
 subtraction(40,13);
 multipiction(5,10);
 division(57,12);
return 0;
}
