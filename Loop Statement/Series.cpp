// 1 + 2 + 3 + 4 .......... N 

#include<iostream>
using namespace std;
int main()
{
    int num , sum = 0;
    cout << "Enter series Last number =";
    cin >> num;
    for(int i =1 ; i<=num ;i++){

          sum = sum + i;
          cout << i << " + " ;
    }

    cout << " = " << sum;

    return 0;

}