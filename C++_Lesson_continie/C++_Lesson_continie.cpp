#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

template <class T>
class Printer
{
public:
    void Print(T value)
    {
        cout << value << endl;
    }
};

template<>
class Printer<string>
{
public:
    void Print(string value)
    {
        cout << "___" << value << "___" << endl;
    }
};

template<>
class Printer<int>
{
public:
    void Print(int value)
    {
        cout << "!!!" << value << "!!!" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color 0A");

    Printer <string> p;
    p.Print("Hello");


    Printer <int> p2;
    p2.Print(10);


    return 0;
}