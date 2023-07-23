#include<iostream>
using namespace std;

class student{
 public :
    int id;
    double cgpa;

    void SetValue(int x , double y)
    {
       id = x;
       cgpa = y;
    }
    void display()
    {
    cout << "Id =" << id << endl;
    cout << "CGPA =" << cgpa << endl;
    }
}jim;

int main()
{
    //student jim;
    jim.SetValue(5364, 3.42);
    jim.display();

    return 0;
}