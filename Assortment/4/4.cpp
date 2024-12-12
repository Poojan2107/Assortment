#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    vector<vector<int>> array(rows, vector<int>(cols));

    cout << "\nEnter array's elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
    int rowNum;
    cout << "\nEnter row number: ";
    cin >> rowNum;

    if (rowNum >= 0 && rowNum < rows)
    {

        int rowSum = 0;
        cout << "Elements of row " << rowNum << ": ";
        for (int j = 0; j < cols; j++)
        {
            cout << array[rowNum][j];
            if (j < cols - 1)
                cout << ", ";
            rowSum += array[rowNum][j];
        }
        cout << "\nThe sum of row " << rowNum << ": " << rowSum << endl;
    }
    else
    {
        cout << "Invalid row number!" << endl;
    }
    int colNum;
    cout << "\nEnter column number: ";
    cin >> colNum;

    if (colNum >= 0 && colNum < cols)
    {
        int colSum = 0;
        cout << "Elements of column " << colNum << ": ";
        for (int i = 0; i < rows; i++)
        {
            cout << array[i][colNum];
            if (i < rows - 1)
                cout << ", ";
            colSum += array[i][colNum];
        }
        cout << "\nThe sum of column " << colNum << ": " << colSum << endl;
    }
    else
    {
        cout << "Invalid column number!" << endl;
    }

    return 0;
}
