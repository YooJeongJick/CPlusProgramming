#include <iostream>
using namespace std;
template <typename T1, typename T2>
void Print(T1 s, T2 a)
{
	cout << a << ", " << b << endl;
}

int main()
{
	Print("Hello", 100);
	Print(50, 2.3);
}

//#include <iostream>
//using namespace std;
//
//template <typename T>
//void Swap(T& a, T& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//
//template <typename K>
//void Print(K a, K b)
//{
//	cout << a << ", " << b << endl;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	Swap(a, b);
//	Print(a, b);
//}

//#include <iostream>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void Print(int a, int b)
//{
//	cout << a << ", " << b << endl;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	//Point a(), b();
//	//string a(), b();
//	Swap(a, b);
//	// 모든 타입에 대한 Swap
//
//	Print(a, b);
//	// 모든 타입에 대한 Print
//
//	// 모든 타입을 받을 수 있어야 함!
//}

//#include <iostream>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void Print(int a, int b)
//{
//	cout << a << ", " << b << endl;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	Swap(a, b);
//	Print(a, b);
//}

//#include <iostream>
//using namespace std;
//template <typename T>
//
//void Print(T data)
//{
//	cout << data << endl;
//}
//
//int main()
//{
//	Print<int>(10);
//	Print<double>(5.66);
//	Print<const char*>("Hello!");
//	Print(20);
//	Print<int>(5.5);
//}

//#include <iostream>
//using namespace std;
//template <typename T>
//
//void Print(T data)
//{
//	cout << data << endl;
//}
//
//int main()
//{
//	Print<int>(10);
//	Print<double>(5.66);
//	Print<const char*>("Hello!");
//}

//#include <iostream>
//using namespace std;
//template <typename T>
//
//void Print(T data)
//{
//	cout << data << endl;
//}
//
//int main()
//{
//	Print(10);
//	Print(5.66);
//	Print("Hello!");
//}

//#include <iostream>
//using namespace std;
//
//struct Printer
//{
//	string pattern;
//	Printer(const string& ptn) : pattern(ptn) {}
//	void operator()(int data) const
//	{
//		cout << pattern << data << endl;
//	}
//};
//
//// server
//void For_each(int start[], int end[], Printer f)
//{
//	for (; start != end; ++start)
//		f(*start); // callback (Server -> Client);
//}
//// client
//
//int main()
//{
//	int list[] = { 10, 20, 30, 40, 50 };
//	For_each(list, list + 5, Printer("int : ")); // call(Client -> Server)
//	For_each(list, list + 5, Printer(""));
//}

//#include <iostream>
//using namespace std;
//
//// server
//void For_each(int start[], int end[], void (*f)(int))
//{
//	for (; start != end; ++start)
//		f(*start); // callback (Server -> Client);
//}
//
//// client
//void print(int data) // callback function
//{
//	cout << "int : " << data << endl;
//}
//void print2(int data)
//{
//	cout << data << endl;
//}
//
//int main()
//{
//	int list[] = { 10, 20, 30, 40, 50 };
//	For_each(list, list + 5, print); // call(Client -> Server)
//	For_each(list, list + 5, print2);
//}

//#include <iostream>
//#include <functional>
//#include <algorithm>
//using namespace std;
//// C++의 가장 중요한 연산자 중복 operator()
//
//class Less
//{
//public:
//	bool operator()(int a, int b) const
//	{
//		return a < b;
//	}
//};
//
//class Greater
//{
//public:
//	bool operator()(int a, int b) const
//	{
//		return a > b;
//	}
//};
//
//void print(int data)
//{
//	cout << data << " ";
//}
//
//int main()
//{
//	int list[5] = { 39, 68, 70, 10, 95 };
//
//	for_each(list, list + 5, print); cout << endl;
//	sort(list, list + 5, Less());
//	sort(list, list + 5, Greater());
//	for_each(list, list + 5, print); cout << endl;
//}

//#include <iostream>
//#include <functional>
//#include <algorithm>
//using namespace std;
//// C++의 가장 중요한 연산자 중복 operator()
//
//class Less
//{
//public:
//	bool operator()(int a, int b) const
//	{
//		return a < b;
//	}
//};
//
//int main()
//{
//	Less l;
//	cout << l(1, 2) << endl;
//	cout << l(5, 2) << endl;
//	cout << Less()(1, 2) << endl;
//	// l : functor
//}

//#include <iostream>
//#include <functional>
//#include <algorithm>
//using namespace std;
//// C++의 가장 중요한 연산자 중복 operator()
//
//void Print(int data)
//{
//	cout << "int : " << data << endl;
//}
//
//class Functor
//{
//public:
//	void operator()(int data) const
//	{
//		cout << "int : " << data << endl;
//	}
//};
//
//int main()
//{
//	Print(10);
//	Print(20);
//
//	void (*p1)(int) = Print;
//	p1(30);
//
//	Functor p2;
//	p2(40);
//	p2.operator()(50);
//	Functor()(60); 
//}

//#include <iostream>
//#include <functional>
//#include <algorithm>
//using namespace std;
//// C++의 가장 중요한 연산자 중복 operator()
//
//void Print(int data)
//{
//	cout << "int : " << data << endl;
//}
//
//struct Funtor
//{
//	void operator()(int data) const
//	{
//		cout << "int : " << data << endl;
//	}
//};
//
//int main()
//{
//	Print(10);
//	Print(20);
//	
//	//Print; 
//	// 함수의 시작 주소
//
//	void (*p1)(int) = Print;
//	p1(30);
//
//	Funtor p2;
//	p2(40);
//	p2.operator()(50);
//}

//#include <iostream>
//#include <functional>
//#include <algorithm>
//using namespace std;
//// C++의 가장 중요한 연산자 중복 operator()
//
//void print(int data)
//{
//	cout << data << " ";
//}
//
//int main()
//{
//	int list[5] = { 39, 68, 70, 10, 95 };
//
//	for_each(list, list + 5, print); cout << endl;
//	sort(list, list + 5, greater<int>());
//	for_each(list, list + 5, print); cout << endl;
//}

//#include <iostream>
//#include <functional>
//#include <algorithm>
//using namespace std;
//// C++의 가장 중요한 연산자 중복 operator()
//
//void print(int data)
//{
//	cout << data << " ";
//}
//
//int main()
//{
//	int list[5] = { 39, 68, 70, 10, 95 };
//
//	for_each(list, list + 5, print); cout << endl;
//	sort(list, list + 5);
//	for_each(list, list + 5, print); cout << endl;
//	// 오름차 순
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//
//	int& operator[](int idx)
//	{
//		if (idx == 0)
//			return x;
//		else if (idx == 1)
//			return y;
//		else
//			throw "index 범위를 넘었다~ 야호";
//	}
//};
//
//int main()
//{
//	Point pt(2, 3);
//
//	pt[0] = 100;
//
//	cout << pt[0] << endl; // x
//	// pt. operator[][0]
//	cout << pt[1] << endl; // y
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//
//	int operator[](int idx)
//	{
//		if (idx == 0)
//			return x;
//		else if (idx == 1)
//			return y;
//		else
//			throw "index 범위를 넘었다~ 야호";
//	}
//};
//
//int main()
//{
//	Point pt(2, 3);
//
//	pt[0] = 100; 
//	// 2 = 100;
//
//	cout << pt[0] << endl; // x
//	// pt. operator[][0]
//	cout << pt[1] << endl; // y
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//
//	int operator[](int idx)
//	{
//		if (idx == 0)
//			return x;
//		else if (idx == 1)
//			return y;
//		else
//			//throw "index 범위를 넘었다~ 예외";
//			throw "index 범위를 넘었다~ 야호";
//	}
//};
//
//int main()
//{
//	Point pt(2, 3);
//
//	cout << pt[0] << endl; // x
//	// pt. operator[][0]
//	cout << pt[1] << endl; // y
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//
//ostream& operator<<(ostream& out, const Point& pt)
//{
//	out << pt.GetX() << ", " << pt.GetY();
//	return out;
//}
//
//int main()
//{
//	Point pt(2, 3);
//
//	cout << pt[0] << endl; // x
//	cout << pt[1] << endl; // y
//	cout << pt[2] << endl; // throw
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//
//ostream& operator<<(ostream& out, const Point& pt)
//{
//	out << pt.GetX() << ", " << pt.GetY();
//	return out;
//}
//
//int main()
//{
//	Point pt(2, 3);
//
//	cout << pt << ',' << 5.23 << endl;
//	operator<<(cout, pt).operator<<(',').operator<<(5.23).operator << (endl);
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//
//void operator<<(ostream& out, const Point& pt)
//{
//	out << pt.GetX() << ", " << pt.GetY();
//}
//
//int main()
//{
//	Point pt(2, 3);
//
//	cout << pt;
//	// operator<<(cout, pt)
//	cout << pt << ',' << 5.23 << endl;
//	// 오류 발생
//	// cout << 어쩌고...이후, 함수는 다시 객체 자신이 되어야 함
//
//	cout << ", ";
//	cout.operator<<(5.23);
//	cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//
//void operator<<(ostream& out, const Point& pt)
//// ostream 앞에 const 제외
//// 출력 스트림은 사용 시, 내부적인 정보가 변경되기 때문
//{
//	out << pt.GetX() << ", " << pt.GetY();
//}
//
//int main()
//{
//	Point pt(2, 3);
//	cout << 100 << ", " << 5.23 << endl;
//
//	cout << pt; 
//	// operator<<(cout, pt)
//	cout << ", ";
//	cout.operator<<(5.23);
//	cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());
//}
//
//int main()
//{
//	cout << 100 << ", " << 5.23 << endl;
//
//	cout << pt;
//	// cout이 Point 출력 방법을 모름 
//
//	cout << ", ";
//
//	//cout << 5.23;
//	cout.operator<<(5.23)
//		;
//	cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());
//}
//
//int main()
//{
//	cout << 100 << ", " << 5.23 << endl;
//	cout << 100;
//	cout << ", ";
//	cout << 5.23;
//	cout << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());
//}
//
//int main()
//{
//	Point pt1(2, 3);
//	pt1.Print();
//
//	Point pt2 = 100 + pt1; 
//	// 멤버 함수로 불가능 
//	// operator+(100, pt1)
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	//friend const Point operator+(const Point& p1, const Point& p2); // 1.
//};
//
//const Point operator+(const Point& p1, const Point& p2)
//{
//	//return Point(p1.x + p2.x, p1.y + p2.y); // 1.
//	return Point(p1.GetX() + p2.GetX(), p1.GetY() + p2.GetY());
//}
//
//int main()
//{
//	Point pt1(2, 3);
//	pt1.Print();
//
//	Point pt2(3, 4);
//	Point pt3 = pt1 + pt2;
//	// Point pt3 = pt1.operator+(pt2);
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//
//	const Point operator+(const Point& arg) 
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//
//int main()
//{
//	Point pt1(2, 3);
//	pt1.Print();
//
//	Point pt2(3, 4);
//	Point pt3 = pt1 + pt2;
//	// Point pt3 = pt1.operator+(pt2);
//	pt3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const
//	{
//		cout << x << ", " << y << endl;
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//
//};
//
//int main()
//{
//	Point pt1(2, 3);
//	pt1.Print();
//}
