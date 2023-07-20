#include<iostream>
using namespace std;
int main()
{
    int x=5;
int y=++x;
cout<<y<<endl<<x;
//post  increment
 y=x++;
cout<<endl<<y<<endl<<x;
//pre decrement
y = --x;
cout<<endl<<y<<endl<<x;
 //post  decrement
 y=x--;
cout<<endl<<y<<endl<<x;
return 0;
}
