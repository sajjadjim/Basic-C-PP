#include<iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter any NUmber =";
    cin >> num;

    for(int i=1 ; i<=10 ; i++)
    {
        cout << num << " X " << i << "=" << (num*i) <<endl ;
    }
    cout << "End of the Result ";
    
    return 0;
}
