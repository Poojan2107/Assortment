#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the array's size: ";
    cin >> n;

    int arr[n];

    cout << "\nEnter array's elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nNegative elements from an Array: ";
    bool foundNegative = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (foundNegative)
            {
                cout << ", ";
            }
            cout << arr[i];
            foundNegative = true;
        }
    }

    if (!foundNegative)
    {
        cout << "None";
    }

    cout << endl;
    return 0;
}