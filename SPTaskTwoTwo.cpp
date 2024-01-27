#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {8, 9, 10, 11}
    };

    const int rows = sizeof(array) / sizeof(array[0]);
    const int columns = sizeof(array[0]) / sizeof(array[0][0]);
    int newArr[columns][rows] = {};

    cout << "Исходная матрица:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << " " << array[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++)
        {
            newArr[j][i] = array[i][j];
        }
    }

    cout << "Транспонированная матрица:" << endl;

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << " " << newArr[i][j];
        }
        cout << endl;
    }
}
