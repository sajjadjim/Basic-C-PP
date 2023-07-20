#include<iostream>
using namespace std ;
int main(){

    int num ;
    cout << "Enter number =";
    cin >> num;

    for(int i =1  ; i<=num ; i ++)
    {
        for(int j=1 ; j<=i ; j ++){
            cout << " * ";

        }
        cout << endl;
    }
    for(int i =num -1   ; i>=1 ; i--)
    {
        for(int j=1 ; j<=i ; j ++){
            cout << " * ";

        }
        cout << endl;
    }

    return 0;
}