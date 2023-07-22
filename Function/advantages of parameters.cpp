#include<iostream>
#include<conio.h>
using namespace std;

 void square (int x)
 {
     int output=x*x;
     cout<<"Square of = "<<x<<" = "<<output<<endl;
 }

 int main()
 {
     square(5);
     square(6);
     square(7);

     getch();
 }