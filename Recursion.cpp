#include<iostream>
#include<conio.h>
using namespace std;

int fact(int num){
    if(num == 1)
    {
        return 1;
    }

    else
{
    return num * fact(num-1);
}

}

int main()
 {
    int factorial = fact(4);

    cout<<"VALUE OF FACTORIAL ="<<factorial;

    getch();
}