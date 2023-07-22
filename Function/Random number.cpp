#include<iostream>
using namespace std;
int main()
{
    int RandomNumber;

    for(int i=0 ; i<5 ;i++)
    {
    RandomNumber = rand();
    cout << "Random number ="<< RandomNumber << endl;
    }
    return 0;
}