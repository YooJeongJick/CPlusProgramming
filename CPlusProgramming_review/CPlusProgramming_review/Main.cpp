#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person(string n, int a) : name(n), age(a) {}
	void Print() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
		cout << endl;
	}
};

class Student : public Person {
	string school;
public:
	Student(string n, int a, string s) : Person(n, a), school(s) {}
	void Print() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
		cout << "�б� : " << school << endl;
		cout << endl;
	}
};

class Idol : public Person {
	string group;
public:
	Idol(const string& n, int a, string g) : Person(n, a), group(g) {}
	void Print() const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
		cout << "�Ҽ� : " << group << endl;
		cout << endl;
	}
};

int main()
{
	Person p1("�����", 21);
	p1.Print();
	Student s1("Ŵ����", 17, "�Ѹ�����");
	s1.Print();
	Idol i1("����", 19, "������");
	i1.Print();
}
