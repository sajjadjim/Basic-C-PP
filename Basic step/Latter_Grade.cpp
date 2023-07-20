#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your Exam Marks =";
    cin >> num;

    if(num<=100 && num>=80){
        cout << "Your Got A+";
    }
        if(num<=79 && num>=70){
        cout << "Your Got A";
    }
        if(num<=69 && num>=60){
        cout << "Your Got A-";
    }
        if(num<=59 && num>=50){
        cout << "Your Got B";
    }
        if(num<=49 && num>=40){
        cout << "Your Got C";
    }
        if(num<=39 && num>=33){
        cout << "Your Got D";
    }
        if(num<33){
        cout << "Your Fail !!!";
    }
}
