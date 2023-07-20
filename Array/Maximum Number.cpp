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

    int max = array[0];

    for(int i=1 ; i<n ;i++){
        if(max < array[i])
        {
           max = array[i];
        }
    }
    cout << "Maximum Number = " << max ;

}
