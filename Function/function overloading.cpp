#include<iostream>
using namespace std;

void sum(int a , int b)
{
    int result ;
    cout << "First function value =" << (a+b) << endl;
}

void sum(double a, double b)
{
    double result ;
    cout << "Second function number =" << (a+b) <<endl;
}

int main()
{
    sum (10,20);
    sum(15.567 , 17.57);
    return 0;
}