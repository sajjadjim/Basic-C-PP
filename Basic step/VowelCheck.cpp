#include<iostream>
using namespace std;
int main()
{

    char ch;
    cout<<"ENTER ANY CHARACTER : ";
    cin>>ch;
    if ( ch =='a' || ch =='e'|| ch =='i' || ch =='o' || ch =='u')
    {
        cout<<"VOWEL";
    }
    else
    {
        cout<<"CONSONANT";
    }

    return 0;
}
