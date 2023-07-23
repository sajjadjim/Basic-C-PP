#include<iostream>
using namespace std;

  class student{
 public :
    int id;
    double cgpa;

    void display()
    {
    cout << "Id =" << id << endl;
    cout << "CGPA =" << cgpa << endl;
    }
}jim;

int main()
{
    //student jim;
    jim.id = 221;
    jim.cgpa = 3.42;
    jim.display();

    return 0;
}