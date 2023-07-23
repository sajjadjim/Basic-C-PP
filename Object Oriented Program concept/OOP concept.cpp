#include<iostream>
using namespace std;

  class student{
 public :
    int id;
    double cgpa;
};

int main()
{
    student jim;
    jim.id = 221;
    jim.cgpa = 3.42;

    cout << "Id =" << jim.id << endl;
    cout << "CGPA =" << jim.cgpa << endl;

    return 0;
}