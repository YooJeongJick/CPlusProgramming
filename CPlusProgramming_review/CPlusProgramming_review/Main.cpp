#include <iostream>
using namespace std;

class Point {
	int x, y;
public :
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {};

	const Point operator+(const Point& arg) const
	{
		return Point(x + arg.x, y + arg.y);
	}
	bool operator==(const Point& arg) const
	{
		return x == arg.x && y == arg.y;
	}
	bool operator!=(const Point& arg) const
	{
		return !(*this == arg);
	}
	const Point&  operator++()
	{
		++x;
		++y;
	}
};
int main()
{
	Point p1(3, 4);
	Point p2;
	p2 = ++p1;
}