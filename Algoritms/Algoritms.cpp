#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int SIZE = 7;

void BubbleSort(int arr[])// Пузырек
{
    int len = SIZE;

    while (len != 0)
    {
        int max_index = 0;
        for (int i = 1; i < SIZE; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                int value = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = value;

                max_index = i;
            }
        }
        len = max_index;
    }

}

void SelectionSort(int arr[]) // Выбором
{
    for (int i = 1; i < SIZE; i++)
    {
        int min = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            if (min != i)
            {
                int value = arr[min];
                arr[min] = arr[i];
                arr[i] = value;
            }
        }
    }
}

void InsertionSort(int arr[])// Вставками
{
    for (int i = 1; i < SIZE; i++)
    {
        int sort = i - 1;
        while(sort > -1 && arr[sort] > arr[sort + 1])
        {
            int value = arr[sort];
            arr[sort] = arr[sort + 1];
            arr[sort + 1] = value;
            sort--;
        }
    }
}

void LinealSearh(int arr[],int value)// Линейный поиск
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == value)
        {
            cout << "Number its belongs " << endl << "Plays is stack in: " << i << endl;
        }
    }
}

int main()
{
    int arr[SIZE] = { 1,5,3,7,2,8,4 };

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }


    cout << endl;
    return 0;
}