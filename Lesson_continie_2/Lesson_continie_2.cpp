#include <iostream>
#include <string>
#include <memory>
#include <Windows.h>
using namespace std;

template <class T>
class SmartPointer
{
public:
    SmartPointer(T *ptr)
    {
        this->ptr = ptr;
    }

    ~SmartPointer()
    {
        delete ptr;
    }

    T& operator *()
    {
        return *ptr;
    }

private:
    T* ptr;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color 0A");

    int SIZE;
    cin >> SIZE;

    shared_ptr <int[]> ptr(new int[SIZE]);

    for (int i = 0; i < SIZE; i++)
    {
        ptr[i] = rand() % 10;
        cout << ptr[i] << "  ";
    }

    return 0;
}