#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many blocks you want =";
    cin >> n;

    int array[100][100];

    for(int row = 0 ; row<n ; row ++)
    {
        for(int col = 0 ;col < n  ; col++)
        {
            cout << "A" <<"["<<row<<"]"<<"[" << col<<"]=";
            cin >> array[row][col];
        }
        cout <<endl;
    }

        for(int row = 0 ; row<n ; row ++)
    {
        for(int col = 0 ;col < n  ; col++)
        {
           cout <<array[row][col]<<" ";

        }
        cout << endl;
    }

}
