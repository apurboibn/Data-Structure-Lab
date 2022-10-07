#include <iostream>
using namespace std;

int main() {
    int row, column, i, j;
    cout << "Enter the number of rows of Matrix : ";
    cin >> row;

    cout << "Enter the number of column of Matrix : ";
    cin >> column;

    int Matrix[row][column], TransposeMatrix[column][row];

    cout<<"\nEnter the value of input Matrix: ";
    for (i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    cout<<"\n*** GIVEN MATRIX ***\n";
    for (i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            TransposeMatrix[j][i] = Matrix[i][j];
        }
    }

    cout<<"\n*** TRANSPOSE MATRIX ***\n";
    for (i = 0; i < column; i++)
    {
        for(j = 0; j < row; j++)
        {
            cout << TransposeMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

