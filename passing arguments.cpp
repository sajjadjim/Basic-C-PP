#include<iostream>
using namespace std;

void display(int *num)   // Address calling function received by pointer value
{
    *num = 64;  // Using pointer to Value store

}
int main()
{

    int x = 53;
    cout <<"Before Calling function =" <<x << endl;

    display(&x);  // Address Calling By function
    cout<< "After Calling function =" << x <<endl;

    return 0;
}
