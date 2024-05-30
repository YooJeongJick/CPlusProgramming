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
	//Point p2 = p1; // ���� ������
	Point p2;
	Point p3;

	p3 = p2 = p1; // ���� ���� ������ // p2.operator=(p1)

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
//	// int, ����++ �޼ҵ�� �����ϱ� ����
//	// ������� �ʱ� ������ �̸��� �ʿ����� �ʴ�
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
//	// ������ �ߺ� (��ü Ÿ�Կ� ������ �����ϵ��� �����ϴ� ����)
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
//	const Point operator+(const Point& arg) const // p1 �Һ� ����
//	// ���� ����
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//int main()
//{
//	// ������ �ߺ� (��ü Ÿ�Կ� ������ �����ϵ��� �����ϴ� ����)
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
//	// ������ �ߺ� (��ü Ÿ�Կ� ������ �����ϵ��� �����ϴ� ����)
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
//	// ������ �ߺ� (��ü Ÿ�Կ� ������ �����ϵ��� �����ϴ� ����)
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

// ����!!
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
//	virtual ~Person() // ����!!
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
//	Person per("ȫ�浿", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//
//	Student s1("�̸���", 20, 1);
//	s1.Print();
//
//	Person& rp = s1;
//	rp.Print();
//	Person* p = new Professor("�Ӳ���", 45, "������");
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
//	Person per("ȫ�浿", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//
//	Student s1("�̸���", 20, 1);
//	s1.Print();
//
//	// ���� �߻�
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
//		// get �޼ҵ�� ����	
//		cout << "( " << GetName() << ", " << GetAge() << ", " << grade << " )" << endl;
//	}
//
//	int GetGrade() const { return grade; }
//	int SetGrade(int g) { grade = g; }
//};
//
//int main()
//{
//	Person per("ȫ�浿", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//
//	Student s1("�̸���", 20, 1);
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
//	Person per("ȫ�浿", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//
//	Student s1("�̸���", 20, 1);
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
//	Person per("ȫ�浿", 25);
//	per.Print();
//	cout << "Name : " << per.GetName() << endl;
//	cout << "Age : " << per.GetAge() << endl;
//}