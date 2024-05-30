#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ", " << y << endl; }
	int GetX() const { return x; }
	int GetY() const { return y; }
	const Point& operator=(const Point& arg)
	{
		cout << "operator=" << endl;
		x = arg.x;
		y = arg.y;

		return *this;
	}
};

int main()
{
	Point p1(2, 3);
	//Point p2 = p1; // 복사 생성자
	Point p2;
	Point p3;

	p3 = p2 = p1; // 복사 대입 연산자 // p2.operator=(p1)

	p1.Print();
	p2.Print();
}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point& operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//		return *this;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//	const Point operator++(int) 
//	// int, 전위++ 메소드와 구분하기 위함
//	// 사용하지 않기 때문에 이름도 필요하지 않다
//	{
//		//Point t = *this;
//		Point oldPt(x, y);
//		++x; ++y;
//		return oldPt;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	Point p2;
//
//	p2 = p1++;
//	p1.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point& operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//		return *this;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	Point p2;
//
//	p2 = ++p1;
//	p1.Print(); 
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point& operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//		return *this;
//	}
//};
//
//int main()
//{
//	//int a = 10, b = 20;
//	//int c = a += b;
//
//	Point p1(2, 3), p2(3, 4);
//
//	Point p3 = p1 += p2;
//
//	p1.Print(); // 5, 7
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//	}
//};
//int main()
//{
//	//int a = 10, b = 20;
//	//int c = a += b;
//	
//	Point p1(2, 3), p2(3, 4);
//
//	p1 += p2; // p1.operator+=(p2)
//
//	p1.Print(); // 5, 7
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//	bool operator==(const Point& arg) const
//	{
//		return x == arg.x && y == arg.y;
//	}
//	bool operator!=(const Point& arg) const
//	{
//		//return (x != arg.x || y != arg.y);
//		return !(*this == arg);
//	}
//
//};
//int main()
//{
//	Point p1(2, 3), p2(2, 3);
//
//	if (p1 == p2) // p1.operator==(p2)
//		cout << "true" << endl;
//
//	Point p3(3, 4);
//	if (p1 != p3)
//		cout << "true" << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//};
//int main()
//{
//	//Point p1(2, 3), p2(2, 3);
//	string s1 = "Hello!", s2 = "Hello!";
//
//	if (s1 == s2)
//		cout << "true" << endl;
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//};
//int main()
//{
//	// 연산자 중복 (객체 타입에 연산이 가능하도록 정의하는 문법)
//	int a = 10, b = 20;
//	int c = a + b;
//
//	Point p1(2, 3), p2(4, 5);
//	Point p3 = p1 - p2;
//
//	p3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point operator+(const Point& arg) const // p1 불변 보장
//	// 참조 제거
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//int main()
//{
//	// 연산자 중복 (객체 타입에 연산이 가능하도록 정의하는 문법)
//	int a = 10, b = 20;
//	int c = a + b;
//
//	Point p1(2, 3), p2(4, 5);
//	Point p3 = p1 + p2;
//
//	p3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point& operator+(const Point& arg)
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//int main()
//{
//	// 연산자 중복 (객체 타입에 연산이 가능하도록 정의하는 문법)
//	int a = 10, b = 20;
//	int c = a + b;
//
//	Point p1(2, 3), p2(4, 5);
//	Point p3 = p1 + p2;
//
//	p3.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
//	void Print() const { cout << x << ", " << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	const Point& Add(const Point& arg)
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//int main()
//{
//	// 연산자 중복 (객체 타입에 연산이 가능하도록 정의하는 문법)
//	int a = 10, b = 20;
//	int c = a + b;
//
//	Point p1(2, 3), p2(4, 5);
//
//	//Point p3 = p1 + p2;
//	Point p3 = p1.Add(p2);
//
//	p3.Print();
//}

// 시험!!
//#include <iostream>
//using namespace std;
//
//class Person {
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//
//	virtual ~Person() // 시험!!
//	{
//		cout << "~Person()" << endl;
//	}
//
//	virtual void Print() const
//	{
//		cout << "name : " << name << ", " << "age : " << age << endl;
//	}
//
//	const string& GetName() const { return name; }
//	void SetName(const string& n) { name = n; }
//	int GetAge() const { return age; }
//	void SetAge(int a) { age = a; }
//};
//
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)
//	{
//		cout << "Student()" << endl;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//
//	void Print() const
//	{
//		cout << "( " << GetName() << ", " << GetAge() << ", " << grade << " )" << endl;
//	}
//
//	int GetGrade() const { return grade; }
//	int SetGrade(int g) { grade = g; }
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string& pos = 0) : Person(n, a), position(pos)
//	{
//		cout << "Professor()" << endl;
//	}
//
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//
//	void Print() const
//	{
//		cout << "( " << GetName() << ", " << GetAge() << ", " << GetPos() << " )" << endl;
//	}
//
//	const string&  GetPos() const { return position; }
//	int SetPos(const string& pos) { position = pos; }
//};
//
//int main()
//{
//	Person per("홍길동", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//
//	Student s1("이몽룡", 20, 1);
//	s1.Print();
//
//	Person& rp = s1;
//	rp.Print();
//	Person* p = new Professor("임꺽정", 45, "정교수");
//	p->Print();
//	delete p;
//}

//#include <iostream>
//using namespace std;
//
//class Person {
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//
//	virtual void Print() const
//	{
//		cout << "name : " << name << ", " << "age : " << age << endl;
//	}
//
//	const string& GetName() const { return name; }
//	void SetName(const string& n) { name = n; }
//	int GetAge() const { return age; }
//	void SetAge(int a) { age = a; }
//};
//
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)
//	{
//		cout << "Student()" << endl;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//
//	void Print() const
//	{
//		cout << "( " << GetName() << ", " << GetAge() << ", " << grade << " )" << endl;
//	}
//
//	int GetGrade() const { return grade; }
//	int SetGrade(int g) { grade = g; }
//};
//
//int main()
//{
//	Person per("홍길동", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//
//	Student s1("이몽룡", 20, 1);
//	s1.Print();
//
//	// 문제 발생
//	Person& rp = s1;
//	rp.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Person {
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//
//	void Print() const
//	{
//		cout << "name : " << name << ", " << "age : " << age << endl;
//	}
//
//	const string& GetName() const { return name; }
//	void SetName(const string& n) { name = n; }
//	int GetAge() const { return age; }
//	void SetAge(int a) { age = a; }
//};
//
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)
//	{
//		cout << "Student()" << endl;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//
//	void Print() const
//	{
//		// get 메소드로 수정	
//		cout << "( " << GetName() << ", " << GetAge() << ", " << grade << " )" << endl;
//	}
//
//	int GetGrade() const { return grade; }
//	int SetGrade(int g) { grade = g; }
//};
//
//int main()
//{
//	Person per("홍길동", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//
//	Student s1("이몽룡", 20, 1);
//	s1.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Person {
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//
//	void Print() const
//	{
//		cout << "name : " << name << ", " << "age : " << age << endl;
//	}
//
//	const string& GetName() const { return name; }
//	void SetName(const string& n) { name = n; }
//	int GetAge() const { return age; }
//	void SetAge(int a) { age = a; }
//};
//
//class Student : public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)
//	{
//		cout << "Student()" << endl;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//
//	void Print() const
//	{
//		cout << "( " << name << ", " << age << ", " << grade << " )" << endl;
//	}
//
//	int GetGrade() const { return grade; }
//	int SetGrade(int g) { grade = g; }
//};
//
//int main()
//{
//	Person per("홍길동", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//
//	Student s1("이몽룡", 20, 1);
//	s1.Print();
//}

//#include <iostream>
//using namespace std;
//
//class Person {
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//
//	void Print() const 
//	{
//		cout << "name : " << name << ", " << "age : " << age << endl;
//	}
//
//	const string& GetName() const { return name; }
//	void SetName(const string& n) { name = n; }
//	int GetAge() const { return age; }
//	void SetAge(int a) { age = a; }
//};
//
//int main()
//{
//	Person per("홍길동", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//}