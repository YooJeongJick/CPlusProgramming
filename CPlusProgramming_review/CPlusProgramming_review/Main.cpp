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
		cout << "ÀÌ¸§ : " << name << endl;
		cout << "³ªÀÌ : " << age << endl;
		cout << endl;
	}
};

class Student : public Person {
	string school;
public:
	Student(string n, int a, string s) : Person(n, a), school(s) {}
	void Print() {
		cout << "ÀÌ¸§ : " << name << endl;
		cout << "³ªÀÌ : " << age << endl;
		cout << "ÇÐ±³ : " << school << endl;
		cout << endl;
	}
};

class Idol : public Person {
	string group;
public:
	Idol(const string& n, int a, string g) : Person(n, a), group(g) {}
	void Print() const {
		cout << "ÀÌ¸§ : " << name << endl;
		cout << "³ªÀÌ : " << age << endl;
		cout << "¼Ò¼Ó : " << group << endl;
		cout << endl;
	}
};

int main()
{
	Person p1("±è¹ÎÁö", 21);
	p1.Print();
	Student s1("Å´¹ÎÁã", 17, "ÇÑ¸²¿¹°í");
	s1.Print();
	Idol i1("¹ÎÁö", 19, "´ºÁø½º");
	i1.Print();
}
