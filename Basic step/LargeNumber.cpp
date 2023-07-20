#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout << "Enter 3 Number =";
    cin >>num1 >> num2 >> num3;

    if(num1>num2 && num1>num3){
        cout << "Number "<<num1 << " is Large Number";
    }
       else if(num2>num1 && num2>num3){
        cout << "Number "<<num2 << " is Large Number";
    }
        else if(num3>num1 && num3>num2){
        cout << "Number "<<num3 << " is Large Number";
    }
        else{
        cout << "Program error !!!";
    }
}
