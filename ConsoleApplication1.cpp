// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
    int a;
    int **arr = new int* [4];
    arr[0] = new int[1];
    arr[1] = new int[2];
    arr[2] = new int[1];
    arr[3] = new int[3];

        for (int i = 0; i < 1; i++)
        {
            for(int j = 0; j < 1; j++)
            {    
                arr[i][j] = 1 + rand() % 10;
                cout << arr[i][j];
                cout << " ";
            }
        }

    cout << endl;

        for (int i = 1; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {    
                arr[i][j] = 1 + rand() % 10;
                cout << arr[i][j];
                cout << " ";
            }
        }
    cout << endl;

        for (int i = 2; i < 3; i++)
        {
            for(int j = 0; j < 1; j++)
            {    
                arr[i][j] = 1 + rand() % 10;
                cout << arr[i][j];
                cout << " ";
            }
        }
    cout << endl;

        for (int i = 3; i < 4; i++)
        {
            for(int j = 0; j < 3; j++)
            {    
                arr[i][j] = 1 + rand() % 10;
                cout << arr[i][j];
                cout << " ";
            }
        }
    cout << endl;

    cin >> a;

    return 0;
}

