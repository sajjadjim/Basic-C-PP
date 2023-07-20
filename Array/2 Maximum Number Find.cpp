#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   // int max = numeric_limits<int>::min();
    int max = arr[0];

   // int maxSecond = numeric_limits<int>::min();
    int maxSecond = arr[0];

    for (int i = 0; i < n; i++)
        {
        if (arr[i] > max)
        {
            maxSecond = max;
            max = arr[i];
        }
        else if (arr[i] > maxSecond && arr[i] != max)
        {
            maxSecond = arr[i];
        }
        }

  // Print the number of Maximum and Second Maximum number

    if (maxSecond == numeric_limits<int>::min())
    {
        cout << "There is no second maximum number in the array." << endl;
    }

    else
    {
        cout << "Maximum number: " << max << endl;
        cout << "Second maximum number: " << maxSecond << endl;
    }

    return 0;
}
