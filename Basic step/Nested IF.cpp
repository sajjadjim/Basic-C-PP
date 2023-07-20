#include <iostream>
#include<conio.h>

using namespace std;

int main ()
{

int mark;



cout << "enter any mark : ";

cin >> mark;



if (mark > 32)

    {

    if (mark >= 80)

    	{
    	  cout << "you got A+";
    	}

          else if (mark >= 70)

    	{
    	  cout << "you got A";
    	}

          else if (mark >= 60)

    	{
    	  cout << "you got A-";
    	}

          else if (mark >= 50)

    	{
    	  cout << "you got B";
    	}

          else if (mark >= 40)

    	{
    	  cout << "you got c";
    	}

          else if (mark >= 33)

    	{
    	  cout << "you got D";
    	}

}


  else

    {

cout << "fail";

}

getch ();
}
