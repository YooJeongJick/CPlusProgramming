#include <iostream>
#include <string>
using namespace std;

class Shape {
	string name;
public :
	Shape(const string& n) : name(n) {
	}
	
	virtual ~Shape() {
		cout << "~Shape()" << endl;
	}

	virtual void Draw() const = 0;
};

class Rect : public Shape {
	int x, y, width, height;
public :
	Rect(const string& n, int x, int y, int w, int h) : Shape(n), x(x), y(y), height(h), width(w) {
	}

	~Rect() {
		cout << "~Rect()" << endl;
	}

	void Draw() const {
		cout << "Rect::Draw()" << endl;
	}
};

int main()
{
	Shape* s = new Rect("³×¸ðÀÇ²Þ", 10, 10, 100, 100);
	s->Draw();
	delete s;
}
