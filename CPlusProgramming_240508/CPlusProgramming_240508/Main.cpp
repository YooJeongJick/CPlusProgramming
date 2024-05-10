#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	Person(const string& n = "", int a = 0) : name(n), age(a)
	{
	}
	void Print() const
	{
		cout << "name:" << name << ", " << "age:" << age << endl;
	}
};

class Student : public Person
{
	int grade;

public:
	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)
	{
	}

	void Print() const
	{
		cout << "name:" << name << ", " << "age:" << age << ", " << "grade:" << grade << endl;
	}
};

class Professor : public Person
{
	string position;

public:
	Professor(const string& n = "", int a = 0, const string& pos = "") : Person(n, a), position(pos)
	{
	}

	void Print() const
	{
		cout << "name:" << name << ", " << "age:" << age << ", " << "position:" << position << endl;
	}
};

int main()
{
	Person p1("알파카", 10);
	p1.Print();
	Student s1("춘식이", 20, 1);
	s1.Print();
	Professor pf1("라이언", 40, "조교수");
	pf1.Print();
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& name = "", int a = 0) : name(n), age(a)
//	{
//	}
//	void Print() const
//	{
//		cout << "name:" << name << ", " << "age:" << age << endl;
//	}
//};
//
//class Student
//{
//	string name;
//	int age;
//	int grade;
//
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : name(0), age(a), grade(g)
//	{
//	}
//
//	void Print() const
//	{
//		cout << "name:" << name << ", " << "age:" << age << ", " << "grade:" << grade << endl;
//	}
//};
//
//class Professor
//{
//	string name;
//	int age;
//	string position;
//
//public:
//	Professor(const string& n = "", int a = 0, const string& pos = "") : name(n), age(a), position(pos)
//	{
//	}
//
//	void Print() const
//	{
//		cout << "name:" << name << ", " << "age:" << age << ", " << "position:" << position << endl;
//	}
//};
//
//int main()
//{
//	Person p1("뿡", 0);
//	p1.Print();
//	Student s1("춘식이", 20, 1);
//	s1.Print();
//	Professor pf1("라이언", 40, "조교수");
//	pf1.Print();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student
//{
//	string name;
//	int age;
//	int grade;
//
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : name(0), age(a), grade(g)
//	{
//	}
//
//	void Print() const
//	{
//		cout << "name:" << name << ", " << "age:" << age << ", " << "grade:" << grade << endl;
//	}
//};
//
//class Professor
//{
//	string name;
//	int age;
//	string position;
//
//public:
//	Professor(const string& n = "", int a = 0, const string& pos = "") : name(n), age(a), position(pos)
//	{
//	}
//
//	void Print() const
//	{
//		cout << "name:" << name << ", " << "age:" << age << ", " << "position:" << position << endl;
//	}
//};
//
//int main()
//{
//	Student s1("춘식이", 20, 1);
//	s1.Print();
//	Professor p1("라이언", 40, "뭐함");
//	p1.Print();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student
//{
//	string name;
//	int age;
//	int grade;
//
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : name(0), age(a), grade(g)
//	{
//	}
//
//	void Print() const
//	{
//		cout << "name:" << name << ", " << "age:" << age << ", " << "grade:" << grade << endl;
//	}
//};
//
//int main()
//{
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class IntArray
//{
//	int* buf;
//	int pidx;
//	int capacity;
//public:
//	IntArray(int capacity)
//	{
//		buf = new int[this->capacity = capacity];
//		pidx = 0;
//	}
//
//	IntArray(const IntArray& arg)
//	{
//		buf = new int[capacity = arg.capacity];
//		pidx = arg.pidx;
//		for (int i = 0; i < pidx; ++i)
//			buf[i] = arg.buf[i];
//	}
//
//	~IntArray()
//	{
//		delete[] buf;
//	}
//
//	void push_back(int data)
//	{
//		buf[pidx++] = data;
//	}
//
//	int size() const
//	{
//		return pidx;
//	}
//
//	int at(int idx) const
//	{
//		return buf[idx];
//	}
//};
//
//int main()
//{
//	IntArray arr(100);
//
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (int i = 0; i < arr.size(); i++)
//		cout << arr.at(i) << endl;
//
//	IntArray arr2 = arr;
//	for (int i = 0; i < arr2.size(); i++)
//		cout << arr2.at(i) << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class IntArray
//{
//	int* buf;
//	int pidx;
//public:
//	IntArray(int capacity)
//	{
//		buf = new int[capacity];
//		pidx = 0;
//	}
//
//	~IntArray()
//	{
//		delete[] buf;
//	}
//
//	void push_back(int data)
//	{
//		buf[pidx++] = data;
//	}
//
//	int size() const
//	{
//		return pidx;
//	}
//
//	int at(int idx) const
//	{
//		return buf[idx];
//	}
//};
//
//int main()
//{
//	IntArray arr(100);
//
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (int i = 0; i < arr.size(); i++)
//		cout << arr.at(i) << endl;
//
//	IntArray arr2 = arr; // 오류 발생
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class IntArray
//{
//	int buf[1000];
//	int pidx;
//public:
//	IntArray()
//	{
//		pidx = 0;
//	}
//
//	void push_back(int data)
//	{
//		buf[pidx++] = data;
//	}
//
//	int size() const
//	{
//		return pidx;
//	}
//
//	int at(int idx) const
//	{
//		return buf[idx];
//	}
//};
//
//int main()
//{
//	IntArray arr;
//
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (int i = 0; i < arr.size(); i++)
//		cout << arr.at(i) << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class IntArray
//{
//	int buf[1000];
//	int pidx;
//public:
//	IntArray() 
//	{
//		pidx = 0;
//	}
//
//	void push_back(int data)
//	{
//		buf[pidx++] = data;
//	}
//
//	int size() const
//	{
//		return pidx;
//	}
//
//	int at(int idx) const
//	{
//		return buf[idx];
//	}
//};
//
//int main()
//{
//	IntArray arr;
//
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (int i = 0; i < arr.size(); i++)
//		cout << arr.at(i) << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//class IntArray
//{
//public:
//	void push_back(int)
//	{
//	}
//
//	int size() const
//	{
//		return 0;
//	}
//
//	int at(int idx) const
//	{
//		return 0;
//	}
//};
//
//int main()
//{
//	IntArray arr;
//
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (int i = 0; i < arr.size(); i++)
//		cout << arr.at(i) << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//typedef vector<int> intArray; // 컬랙션(collection), 컨테이너(container)
//
//int main()
//{
//	intArray arr;
//
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (int i = 0; i < arr.size(); i++)
//		cout << arr.at(i) << endl;
//}
