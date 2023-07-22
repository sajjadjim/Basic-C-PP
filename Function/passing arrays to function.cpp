#include<iostream>
using namespace std;

void ArrayDisplay(int num[], int size)
{
  
  cout <<  "Number =" ;
  for(int i=0 ; i<size ; i++)
  {
    cout  <<num[i]<<" ";
  }
}

int main()
{
  int num[5] = { 10,20,30,40,50 };
  ArrayDisplay(num ,5);
  return 0;
}