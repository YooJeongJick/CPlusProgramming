#include <iostream>
#include <string>
using namespace std;

class Shape
{
	string name;
public:
	Shape(const string& n = "") : name(n)
	{
	}

	virtual ~Shape()
	{
		cout << "~Shape()" << endl;
	}

	virtual void Draw() const = 0; // 순수 가상 함수
};

class Circle : public Shape
{
	int x;
	int y;
	int radius;
public:
	Circle(int x, int y, int r, const string& n) : Shape(n), x(x), y(y), radius(r)
	{
	}

	void Draw() const
	{
		cout << "Circle:" << x << ", " << y << ", " << radius << endl;
	}
};

class Rect : public Shape
{
	int x, y;
	int width;
	int height;
public:
	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(h)
	{
	}

	~Rect()
	{
		cout << "~Rect()" << endl;
	}

	//void Draw() const
	//{
	//	cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
	//}
	// 에러 발생
};

int main()
{
	Shape* sarr[5] = {
		new Rect(0, 0, 100, 100, "r1"),
		new Circle(0, 0, 5, "c1"),
		new Rect(0, 0, 50, 50, "r2"),
		new Circle(0, 0, 10, "c2"),
		new Rect(50, 10, 780, 460, "r3")
	};

	sarr[0]->Draw();
	sarr[1]->Draw();
	sarr[2]->Draw();
	sarr[3]->Draw();
	sarr[4]->Draw();

	delete sarr[0];
	delete sarr[1];
	delete sarr[2];
	delete sarr[3];
	delete sarr[4];
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public:
//	Shape(const string& n = "") : name(n)
//	{
//	}
//
//	virtual ~Shape()
//	{
//		cout << "~Shape()" << endl;
//	}
//
//	virtual void Draw() const = 0; // 순수 가상 함수
//};
//
//class Circle : public Shape
//{
//	int x;
//	int y;
//	int radius;
//public:
//	Circle(int x, int y, int r, const string& n) : Shape(n), x(x), y(y), radius(r)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Circle:" << x << ", " << y << ", " << radius << endl;
//	}
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public:
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(h)
//	{
//	}
//
//	~Rect()
//	{
//		cout << "~Rect()" << endl;
//	}
//
//	void Draw() const
//	{
//		cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
//	}
//};
//
//int main()
//{
//	Shape* sarr[5] = {
//		new Rect(0, 0, 100, 100, "r1"),
//		new Circle(0, 0, 5, "c1"),
//		new Rect(0, 0, 50, 50, "r2"),
//		new Circle(0, 0, 10, "c2"),
//		new Rect(50, 10, 780, 460, "r3")
//	};
//
//	sarr[0]->Draw();
//	sarr[1]->Draw();
//	sarr[2]->Draw();
//	sarr[3]->Draw();
//	sarr[4]->Draw();
//
//	delete sarr[0];
//	delete sarr[1];
//	delete sarr[2];
//	delete sarr[3];
//	delete sarr[4];
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public:
//	Shape(const string& n = "") : name(n)
//	{
//	}
//
//	virtual ~Shape()
//	{
//		cout << "~Shape()" << endl;
//	}
//
//	virtual void Draw() const = 0; // 순수 가상 함수
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public:
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(h)
//	{
//	}
//
//	~Rect()
//	{
//		cout << "~Rect()" << endl;
//	}
//
//	void Draw() const
//	{
//		cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
//	}
//};
//
//int main()
//{
//	Shape* s = new Rect(0, 0, 100, 200, "rect");
//	s->Draw(); // 다형적인 메소드(다형성)
//	delete s;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public:
//	Shape(const string& n = "") : name(n)
//	{
//	}
//	
//	virtual ~Shape()
//	{
//		cout << "~Shape()" << endl;
//	}
//
//	virtual void Draw() const
//	{
//		cout << "Shape::Draw()" << endl;
//	}
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public:
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(h)
//	{
//	}
//
//	~Rect()
//	{
//		cout << "~Rect()" << endl;
//	}
//
//	void Draw() const
//	{
//		cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
//	}
//};
//
//int main()
//{
//	Shape* s = new Rect(0, 0, 100, 200, "rect");
//	s->Draw(); // 다형적인 메소드(다형성)
//	delete s;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public:
//	Shape(const string& n = "") : name(n)
//	{
//	}
//
//	virtual void Draw() const
//	{
//		cout << "Shape::Draw()" << endl;
//	}
//};
//
//class Circle : public Shape
//{
//	int x;
//	int y;
//	int radius;
//public:
//	Circle(int x, int y, int r, const string& n) : Shape(n), x(x), y(y), radius(r)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Circle:" << x << ", " << y << ", " << radius << endl;
//	}
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public:
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(h)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
//	}
//};
//
//int main()
//{
//	Shape* s = new Rect(0, 0, 100, 200, "rect");
//	s->Draw(); // 다형적인 메소드(다형성)
//	delete s;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public:
//	Shape(const string& n = "") : name(n)
//	{
//	}
//
//	virtual void Draw() const
//	{
//		cout << "Shape::Draw()" << endl;
//	}
//};
//
//class Circle : public Shape
//{
//	int x;
//	int y;
//	int radius;
//public:
//	Circle(int x, int y, int r, const string& n) : Shape(n), x(x), y(y), radius(r)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Circle:" << x << ", " << y << ", " << radius << endl;
//	}
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public:
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(h)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
//	}
//};
//
//int main()
//{
//	Rect r(0, 0, 50, 80, "r1");
//	Circle c(0, 0, 10, "c1");
//
//	Shape* ps = nullptr; // NULL;
//	bool flag = false;
//	if (flag)
//		ps = &r;
//	else
//		ps = &c;
//
//	ps->Draw(); // 다형적인 메소드(다형성)
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public:
//	Shape(const string& n = "") : name(n)
//	{
//	}
//
//	virtual void Draw() const
//	{
//		cout << "Shape::Draw()" << endl;
//	}
//};
//
//class Circle : public Shape
//{
//	int x;
//	int y;
//	int radius;
//public:
//	Circle(int x, int y, int r, const string& n) : Shape(n), x(x), y(y), radius(r)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Circle:" << x << ", " << y << ", " << radius << endl;
//	}
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public:
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(h)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
//	}
//};
//
//int main()
//{
//	Rect r(0, 0, 50, 80, "r1");
//	Rect* pr = new Rect(2, 2, 100, 50, "r2");
//
//	Circle c(0, 0, 10, "c1");
//	Circle* pc = new Circle(1, 2, 50, "c2");
//
//	Shape& rs = r;
//	Shape* ps = &c;
//
//	rs.Draw();
//	ps->Draw();
//
//	r.Draw();
//	pr->Draw();
//	c.Draw();
//	pc->Draw();
//
//	delete pr;
//	delete pc;
//}

//P1
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public:
//	Shape(const string& n = "") : name(n)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Shape::Draw()" << endl;
//	}
//};
//
//class Circle : public Shape
//{
//	int x;
//	int y;
//	int radius;
//public:
//	Circle(int x, int y, int r, const string& n) : Shape(n), x(x), y(y), radius(r)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Circle:" << x << ", " << y << ", " << radius << endl;
//	}
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public:
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(h)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
//	}
//};
//
//int main()
//{
//	Rect r(0, 0, 50, 80, "r1");
//	Rect* pr = new Rect(2, 2, 100, 50, "r2");
//
//	Circle c(0, 0, 10, "c1");
//	Circle* pc = new Circle(1, 2, 50, "c2");
//
//	Shape& rs = r;
//	Shape* ps = &c;
//
//	rs.Draw();
//	ps->Draw();
//
//	r.Draw();
//	pr->Draw();
//	c.Draw();
//	pc->Draw();
//
//	delete pr;
//	delete pc;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public:
//	Shape(const string& n = "") : name(n)
//	{
//	}
//
//	void Drow() const
//	{
//		cout << "Shape::Draw()" << endl;
//	}
//};
//
//class Circle : public Shape
//{
//	int x;
//	int y;
//	int radius;
//public:
//	Circle(int x, int y, int r, const string& n) : Shape(n), x(x), y(y), radius(r)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Circle:" << x << ", " << y << ", " << radius << endl;
//	}
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public:
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(g)
//	{
//	}
//
//	void Draw() const
//	{
//		cout << "Rectangle:" << x << ", " << y << ", " << width << "," << height << endl;
//	}
//};
//
//int main()
//{
//	Rect r(0, 0, 50, 80, "r1");
//	Rect* pr = new Rect(2, 2, 100, 50, "r2");
//
//	Circle c(0, 0, 10, "c1");
//	Circle* pc = new Circle(1, 2, 50, "c2");
//
//	r.Drow();
//	pr->Drow();
//	c.Drow();
//	pc->Drow();
//
//	delete pr;
//	delete pc;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//	string name;
//public :
//	Shape(const string& n = "") : name(n)
//	{
//	}
//
//	void Drow() const
//	{
//		cout << "Shape::Draw()" << endl;
//	}
//};
//
//class Circle : public Shape
//{
//	int x;
//	int y;
//	int radius;
//public :
//	Circle(int x, int y, int r, const string& n) : Shape(n), x(x), y(y), radius(r)
//	{
//	}
//};
//
//class Rect : public Shape
//{
//	int x, y;
//	int width;
//	int height;
//public :
//	Rect(int x, int y, int w, int h, const string& n) : Shape(n), x(x), y(y), width(w), height(g)
//	{
//	}
//};
//
//int main()
//{
//	Rect r(0, 0, 50, 80, "r1");
//	Rect* pr = new Rect(2, 2, 100, 50, "r2");
//
//	Circle c(0, 0, 10, "c1");
//	Circle* pc = new Circle(1, 2, 50, "c2");
//
//
//	delete pr;
//	delete pc;
//}