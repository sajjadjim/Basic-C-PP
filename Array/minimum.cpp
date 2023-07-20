#include<iostream>
using namespace std;
int main()
{

    int array[100],n;

    cout << "Enter how many number you want =";
    cin >> n ;



    for(int i =0 ; i<n ;i++)
    {
       cout << "Enter " << i+1 << " number = ";
       cin >> array[i];
    }

    int min = array[0];

    for(int i=1 ; i<n ;i++){
        if(min > array[i])
        {
           min = array[i];
        }
    }
    cout << "Minimum Number = " << min ;

return 0;
}