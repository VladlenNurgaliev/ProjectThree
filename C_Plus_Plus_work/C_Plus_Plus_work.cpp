#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;
//class MyClass
//{
//private:
//    int Size;
//
//public:
//    int* data;
//
//    MyClass(int size)
//    {
//        this->Size = size;
//        this->data = new int[size];
//
//        for (int i = 0; i < size; i++)
//        {
//            data[i] = i;
//        }
//
//        cout << "Вызвался конструктор " << this << endl;
//    }
//
//    MyClass(const MyClass& other)
//    {
//        this->Size = other.Size;
//
//        this->data = new int[other.Size];
//
//        for (int i = 0; i < other.Size; i++)
//        {
//            this->data[i] = other.data[i];
//        }
//
//        cout << "Вызвался конструктор " << this << endl;
//    }
//
//    MyClass & operator = (const MyClass& other)
//    {
//        cout << "Вызвался оператор = " << this << endl;
//
//        this->Size = other.Size;
//
//        if (this->data != nullptr)
//        {
//            delete this->data;
//        }
//        
//        this->data = new int[other.Size];
//
//        for (int i = 0; i < other.Size; i++)
//        {
//            this->data[i] = other.data[i];
//        }
//
//        return *this;
//    }
//
//    ~MyClass()
//    {
//        cout << "Вызвался деструктор " << this << endl;
//
//        delete[] data;
//    };
//};
//
//void Foo(MyClass value)
//{
//    cout << "Вызвалась функция Foo" << endl;
//}
//
//MyClass Foo2()
//{
//    cout << "Вызвалась функция Foo2" << endl;
//    MyClass temp(2);
//
//    return temp;
//}

//class Point
//{
//private:
//
//    int x;
//    int y;
//
//public:
//
//    Point()
//    {
//        x = y = 0;
//    }
//
//    Point(int x, int y)
//    {
//        this->x = x;
//        this->y = y;
//    }
//
//    friend void ChangeX(Point& value);
//
//    bool operator == (const Point& other)
//    {
//        return this->x == other.x && this->y == other.y;
//    }
//
//    bool operator != (const Point& other)
//    {
//        return !(this->x == other.x && this->y == other.y);
//    }
//
//    bool operator >(const Point& other)
//    {
//        return (this->x > other.x && this->y > other.y);
//    }
//
//    bool operator <(const Point& other)
//    {
//        return (this->x < other.x && this->y < other.y);
//    }
//
//    bool operator <=(const Point& other)
//    {
//        return (this->x <= other.x&& this->y <= other.y);
//    }
//
//    bool operator >= (const Point& other)
//    {
//        return (this->x >= other.x && this->y >= other.y);
//    }
//
//
//    Point operator +(const Point& other)
//    {
//        Point temp;
//        temp.x = this->x + other.x;
//        temp.y = this->y + other.y;
//        return temp;
//    }
//
//    Point operator -(const Point& other)
//    {
//        Point temp;
//        temp.x = this->x - other.x;
//        temp.y = this->y - other.y;
//        return temp;
//    }
//
//    Point operator *(const Point& other)
//    {
//        Point temp;
//        temp.x = this->x * other.x;
//        temp.y = this->y * other.y;
//        return temp;
//    }
//
//    Point operator /(const Point& other)
//    {
//        Point temp;
//        temp.x = (double)this->x / (double)other.x;
//        temp.y = (double)this->y / (double)other.y;
//        return temp;
//    }
//
//    Point& operator ++()
//    {
//        this->x++;
//        this->y++;
//
//        return *this;
//    }
//
//    Point& operator ++(int value)
//    {
//        Point temp(*this);
//        this->x++;
//        this->y++;
//
//        return temp;
//    }
//
//    Point& operator --()
//    {
//        this->x--;
//        this->y--;
//
//        return *this;
//    }
//
//    Point& operator --(int value)
//    {
//        Point temp(*this);
//        this->x--;
//        this->y--;
//
//        return temp;
//    }
//
//
//    int GetY()
//    {
//        return y;
//    }
//
//    void SetY(int y)
//    {
//        this->y = y;
//    }
//
//    int GetX()
//    {
//        return x;
//    }
//
//    void SetX(int x)
//    {
//        this->x = x;
//    }
//
//    void Print()
//    {
//        cout << "X = " << x << " " << "Y = " << y << " " << endl;
//    }
//};
//
//void ChangeX(Point& value)
//{
//    value.x = -1;
//}

//class Human;
//class Apple;
//
//class Human
//{
//public:
//
//    void TakeApple(Apple& apple);
//    void EatApple(Apple& apple);
//};
//
//class Apple
//{
//    friend Human;
//
//private:
//
//    int weight;
//    string color;
//    int id;
//
//    static int Count;
//
//public:
//
//    Apple(int weight, string color)
//    {
//        this->weight = weight;
//        this->color = color;
//        Count++;
//        id = Count;
//    }
//
//    int GetId()
//    {
//        return id;
//    }
//
//    void SetId(int id)
//    {
//        this->id = id;
//    }
//
//    static int GetCount()
//    {
//        return Count;
//    }
//
//    static void ChangeColor(Apple& apple, string color)
//    {
//        apple.color = color;
//    }
//
//};
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    system("color 0A");
//
//    Apple apple(150, "Red");
//    Apple apple2(100, "Green");
//    Apple apple3(200, "Yellow");
//
//    cout << apple.GetId() << endl;
//    cout << apple2.GetId() << endl;
//    cout << apple3.GetId() << endl;
//
//    Apple::ChangeColor(apple, "Blue");
//    Apple::ChangeColor(apple2, "WOW");
//
//    Human eat;
//    eat.TakeApple(apple);
//    eat.TakeApple(apple2);
//
//    return 0;
//}
//
//void Human::TakeApple(Apple& apple)
//{
//    cout << apple.color << " " << apple.weight << endl;
//}
//
//void Human::EatApple(Apple& apple)
//{
//    apple.color = "Blue";
//    cout << apple.color << endl;
//
//    apple.color = "Green";
//    cout << apple.color << endl;
//}
//
//int Apple::Count = 0;

//class Pixel
//{
//
//public:
//
//	Pixel()
//		{
//			r = g = b = 0;
//		}
//
//	Pixel(int r, int g, int b)
//		{
//			this->r = r;
//			this->g = g;
//			this->b = b;
//		}
//
//	string GetInfo()
//	{
//		return "Pixel: r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
//	}
//
//private:
//
//	int r;
//	int g;
//	int b;
//
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	system("color 0A");
//
//	const int SIZE = 5;
//	
//	Pixel arr[SIZE];
//
//	arr[0] = Pixel(11, 23, 41);
//  arr[1] = Pixel(23, 53, 53);
// 
//	cout << arr[0].GetInfo() << endl;
//  cout << arr[1].GetInfo() << endl;
//
//	return 0;
//}

//class Weapon
//{
//public:
//	virtual void Shoot() = 0;
// 
//	void Foo()
//	{
//		cout << "!" << endl;
//	}
//};
//	
//class Gun : public Weapon
//{
//public:
//	void Shoot() override
//	{
//		cout << "BANG" << endl;
//	}
//};
//
//class SubmachineGun : public Gun
//{
//public:
//	void Shoot() override
//	{
//		cout << "BANG! BANG! BANG!" << endl;
//	}
//};
//
//class Bazooka : public Weapon
//{
//public:
//	void Shoot() override
//	{
//		cout << "BOOOOGGG" << endl;
//	}
//};
//
//class Knife :public Weapon
//{
//public:
//	void Shoot() override
//	{
//		cout << "VJUH!!!" << endl;
//	}
//};
//
//class Player
//{
//public:
//	void Shoot(Weapon *weapon)
//	{
//		weapon->Shoot();
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	system("color 0A");
//
//	Gun gun;
//	SubmachineGun machinegun;
//	Bazooka bazooka;
//	Knife knife;
//
//	Player player;
//	player.Shoot(&knife);
//	knife.Foo();
//
//
//
//
//	return 0;
//}

//class IBicycle
//{
//public:
//	virtual void TwistTheWheel() = 0;
//	virtual void Ride() = 0;
//};
//
//class SimpleBicycle :public IBicycle
//{
//public:
//	void TwistTheWheel() override
//	{
//		cout << "Метод TwistTheWheel() SimpleBicycle" << endl;
//	}
//	void Ride() override
//	{
//		cout << "Метод Ride() SimpleBicycle" << endl;
//	}
//};
//
//class SportBicycle : public IBicycle
//{
//public:
//	void TwistTheWheel() override
//	{
//		cout << "Метод TwistTheWheel() SportBicycle" << endl;
//	}
//	void Ride() override
//	{
//		cout << "Метод Ride() SportBicycle" << endl;
//	}
//
//};
//
//class Human
//{
//public:
//	void RideOn(IBicycle& bicycle)
//	{
//		cout << "Крутим руль" << endl;
//		bicycle.TwistTheWheel();
//		cout << endl << "Поехали" << endl;
//		bicycle.Ride();
//	}
//};

//class Point //для fstream
//{
//public:
//	Point()
//	{
//		x = y = z = 0;
//	}
//	Point(int x, int y, int z)
//	{
//		this->x = x;
//		this->y = y;
//		this->z = z;
//	}
//private:
//	int x;
//	int y;
//	int z;
//
//	friend ostream& operator<<(ostream& os, const Point& point);
//	friend istream& operator>>(istream& is, Point& point);
//};
//
//ostream& operator<<(ostream& os, const Point& point)
//{
//	os << point.x << " " << point.y << " " << point.z;
//	return os;
//}
//
//istream& operator>>(istream& is,Point& point)
//{
//	is >> point.x >> point.y >> point.z;
//	return is;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	system("color 0A");
//
//	string path = "myFile.txt";
//
//	//Point point(121, 245, 241);
//
//	fstream fs;
//	fs.open(C
//
//	if (!fs.is_open())
//	{
//		cout << "Файл не открылся" << endl;
//	}
//	else
//	{
//		cout << "Файл открыт" << endl;
//		//fs << point << endl;
//
//		while(true)
//		{
//			Point p;
//			fs >> p;
//			if (fs.eof())
//			{
//				break;
//			}
//
//			cout << p << endl;
//		}
//	}
//
//	fs.close();
//
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	system("color 0A");
//
//	string path = "myFile.txt";
//
//	ifstream fin;
//	fin.exceptions(ifstream::badbit | ifstream::failbit);
//
//	try
//	{
//		cout << "Попытка открытия файла" << endl;
//
//		fin.open(path);
//
//		cout << "Файл успешно открыт" << endl;
//	}
//	catch (const ifstream::failure& ex)
//	{
//		cout << ex.what() << endl;
//		cout << ex.code() << endl;
//		cout << "Ошибка открытия файла" << endl;
//	}
//
//	fin.close();
//
//	return 0;
//}

//class MyException : public exception
//{
//public:
//	MyException(const char* msg, int dataState) : exception(msg)
//	{
//		this->dataState = dataState;
//	}
//
//	int GetdataState()
//	{
//		return dataState;
//	}
//
//private:
//	int dataState;
//};
//
//void Foo(int value)
//{
//	if (value < 0)
//	{
//		throw exception("Число меньше 0 ");
//	}
//
//	if (value == 1)
//	{
//		throw MyException("Число  = 1 ", value);
//	}
//
//	cout << "Переменная = " << value << endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	system("color 0A");
//
//	try
//	{
//		Foo(1);// сюда изменения писать (тут)
//	}
//
//	catch (MyException &ex)
//	{
//		cout << "Блок 1 Вы поймали " << ex.what() << endl;
//		cout << "Состояние данных " << ex.GetdataState() << endl;
//	}
//
//	catch (exception& ex)
//	{
//		cout << "Блок 1 мы поймали " << ex.what() << endl;
//	}
//	
//	return 0;
//}

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
private:
	int x;
	int y;
	int z;
};

template <class T1>
class TypeSize
{
public:
	TypeSize(T1 value)
	{
		this->value = value;
	}

	void DataTypeSize()
	{
		cout << sizeof(value) << endl;
	}

protected:
	T1 value;
};



template <class T1>
class TypeInfo : public TypeSize<Point>
{
public:
	TypeInfo(T1 value) : TypeSize(value)
	{

	}

	void ShowTypeName()
	{
		cout << "Название типа " << typeid(value).name() << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 0A");

	Point a;

	TypeInfo <Point> c(a); 
	c.DataTypeSize();
	c.ShowTypeName();

	

	return 0;
}