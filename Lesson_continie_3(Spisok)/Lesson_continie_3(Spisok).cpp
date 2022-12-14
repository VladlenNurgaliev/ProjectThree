#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color 0A");

    int arr[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            arr[0][j] = 99 - (i + j);
            arr[1][j] = 90 - (i + j);
            arr[2][j] = 81 - (i + j);
            arr[3][j] = 72 - (i + j);
            arr[4][j] = 63 - (i + j);
            arr[5][j] = 54 - (i + j);
            arr[6][j] = 45 - (i + j);
            arr[7][j] = 36 - (i + j);
            arr[8][j] = 27 - (i + j);

            //if(i + j == 8) Выделяем нужные числа
            cout << arr[i][j] << " ";
            if (i + j == 8)
                cout << "*";
        }
        cout << endl;
    }
    cout << endl;

   /* cout << arr[8][1] << endl;
    cout << arr[7][1] << endl;
    cout << arr[6][1] << endl;*/



    cout << endl;
    return 0;
}