#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int num;
 while(1)
 {
    cout<< "Enter number 1 to 5 =";
    cin >> num;

    int RandNum = 1 + rand() % 5;

    if(RandNum == num)
    {
        cout << "You win !!!" <<endl;
    }
    else
    {
        cout << "Your loss !"<< endl <<endl;
        cout <<"Random Number ="<< RandNum;
    }
 }

    return 0;
}