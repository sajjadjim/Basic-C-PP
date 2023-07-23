#include<iostream>
using namespace std;

class student{
 public :
    int id;
    double cgpa;

    student(int x , double y)    // If use parameterized constructor create  function , function own name  //Function return type Default 
    {
       id = x;
       cgpa = y;
    }
    void display()
    {
    cout << "Id =" << id << endl;
    cout << "CGPA =" << cgpa << endl;
    }
};

int main()
{
    student jim(5364 , 3.42);  // Parameterized Constructor
   // jim.SetValue(5364, 3.42);
    jim.display();

    return 0;
}