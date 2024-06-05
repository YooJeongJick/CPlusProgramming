#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ", " << y << endl; }

	const Point& operator=(const Point& arg)
	{
		x = arg.x;
		y = arg.y;
		return *this;
		//return Point(x = arg.x, y = arg.y);
	}
};

int main()
{
	Point p1(1, 1);
	Point p2;
	Point p3;

	p3 = p2 = p1;
	p2.Print();
	p3.Print();
	// p3 = p2.operator=(p1);
	
	//p3 = p1 + p2
	//p3 = p1.operator(p2);
}