#include <iostream>
using namespace std;

// 클래스 정의
class Point // struct, class와 매우 유사
{ // private 생략
private:
	int x;
	int y;

public:
	Point(int _x = 0, int _y = 0)
	{
		x = _x;
		y = _y;
	}

	void Print()
	{
		cout << "( " << x << ", " << y << " )" << endl;
	}

	void SetX(int _x)
	{
		x = _x;
	}

	void SetY(int _y)
	{
		y = _y;
	}

};

int main()
{
	Point pt1, pt2(10, 10);

	pt1.SetX(10);
	pt1.SetY(10);

	pt1.Print();
	pt2.Print();
}

//#include <iostream>
//using namespace std;
//
//// 클래스 정의
//class Point // struct, class와 매우 유사
//{ // private 생략
//private:
//	int x;
//	int y;
//
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		x = _x;
//		y = _y;
//	}
//
//	void Print()
//	{
//		cout << "( " << x << ", " << y << " )" << endl;
//	}
//
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//
//};
//
//int main()
//{
//	Point pt1, pt2(10, 10);
//
//	pt1.SetX(10);
//	pt1.SetY(10);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//// 클래스 정의
//struct Point // struct, class와 매우 유사
//{
//private:
//	int x;
//	int y;
//
//public:
//	Point(int _x = 0, int _y = 0)
//	{
//		x = _x;
//		y = _y;
//	}
//
//	void Print()
//	{
//		cout << "( " << x << ", " << y << " )" << endl;
//	}
//
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//
//};
//
//int main()
//{
//	Point pt1, pt2(10, 10);
//
//	//pt1.x = 10; // 에러 발생
//	pt1.SetX(10);
//	pt1.SetY(10);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//// 클래스 정의
//struct Point // struct, class와 매우 유사
//{
//	int x;
//	int y;
//
//	Point(int _x=0, int _y=0)
//	{
//		x = _x;
//		y = _y;
//	}
//
//	void Print()
//	{
//		cout << "( " << x << ", " << y << " )" << endl;
//	}
//
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//
//};
//
//int main()
//{
//	Point pt1, pt2(10,10);
//	
//	pt1.SetX(10);
//	pt1.SetY(10);
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//// 클래스 정의
//struct Point // struct, class와 매우 유사
//{
//	int x;
//	int y;
//
//	Point()
//	{
//		x = 0;
//		y = 0;
//	}
//
//	void Print()
//	{
//		cout << "( " << x << ", " << y << " )" << endl;
//	}
//
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//
//};
//
//int main()
//{
//	Point pt1, pt2;
//	pt1.SetX(10);
//	pt1.SetY(10);
//
//	pt1.Print();
//	pt2.Print();
//}


//#include <iostream>
//using namespace std;
//
//// 클래스 정의
//struct Point // struct, class와 매우 유사
//{
//	int x;
//	int y;
//
//	Point()
//	{
//		x = 0;
//		y = 0;
//	}
//
//	void Print()
//	{
//		cout << "( " << x << ", " << y << " )" << endl;
//	}
//};
//
//int main()
//{
//	Point pt1, pt2;
//
//	pt1.Print();
//	pt2.Print();
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//
//	void Print() // in parameter
//	{
//		cout << x << ',' << y << endl;
//	}
//
//	void Set(int x, int y) // out parameter
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	void Reset()
//	{
//		x = 0;
//		y = 0;
//	}
//
//	Point(int x=2, int y=3)
//	{
//		Set(x, y);
//		cout << "Point 초기화" << endl;
//	}
//
//	~Point()
//	{
//		cout << "Point 마무리" << endl;
//	}
//};
//
//int main()
//{
//	Point pt1;
//
//	pt1.Print();
//	pt1.Set(5, 8);
//	pt1.Print();
//	pt1.Reset();
//	pt1.Print();
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//
//	void Print() // in parameter
//	{
//		cout << x << ',' << y << endl;
//	}
//
//	void Set(int x, int y) // out parameter
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	void Reset()
//	{
//		x = 0;
//		y = 0;
//	}
//
//	void Init(int x, int y)
//	{
//		Set(x, y);
//		cout << "Point 초기화" << endl;
//	}
//
//	void Uninit()
//	{
//		cout << "Point 마무리" << endl;
//	}
//};
//
//int main()
//{
//	Point pt1;
//	pt1.Init(2, 3);
//
//	pt1.Print();
//	pt1.Set(5, 8);
//	pt1.Print();
//	pt1.Reset();
//	pt1.Print();
//
//	pt1.Uninit();
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//
//	void Print(const Point* p) // in parameter
//	{
//		cout << p->x << ',' << p->y << endl;
//	}
//
//	void Set(Point* p, int x, int y) // out parameter
//	{
//		p->x = x;
//		p->y = y;
//	}
//
//	void Reset(Point* p)
//	{
//		p->x = 0;
//		p->y = 0;
//	}
//
//	void Init(Point* p, int x, int y)
//	{
//		Set(p, x, y);
//		cout << "Point 초기화" << endl;
//	}
//
//	void Uninit(Point* p)
//	{
//		cout << "Point 마무리" << endl;
//	}
//};
//
//int main()
//{
//	Point pt1;
//	pt1.Init(&pt1, 2, 3);
//
//	pt1.Print(&pt1);
//	pt1.Set(&pt1, 5, 8);
//	pt1.Print(&pt1);
//	pt1.Reset(&pt1);
//	pt1.Print(&pt1);
//
//	pt1.Uninit(&pt1);
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//
//	void PrintPoint(const Point* p) // in parameter
//	{
//		cout << p->x << ',' << p->y << endl;
//	}
//
//	void SetPoint(Point* p, int x, int y) // out parameter
//	{
//		p->x = x;
//		p->y = y;
//	}
//
//	void ResetPoint(Point* p)
//	{
//		p->x = 0;
//		p->y = 0;
//	}
//
//	void InitPoint(Point* p, int x, int y)
//	{
//		SetPoint(p, x, y);
//		cout << "Point 초기화" << endl;
//	}
//
//	void UninitPoint(Point* p)
//	{
//		cout << "Point 마무리" << endl;
//	}
//};
//
//int main()
//{
//	Point pt1;
//	pt1.InitPoint(&pt1, 2, 3);
//
//	pt1.PrintPoint(&pt1);
//	pt1.SetPoint(&pt1, 5, 8);
//	pt1.PrintPoint(&pt1);
//	pt1.ResetPoint(&pt1);
//	pt1.PrintPoint(&pt1);
//
//	pt1.UninitPoint(&pt1);
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p) // in parameter
//{
//	cout << p->x << ',' << p->y << endl;
//}
//
//void SetPoint(Point* p, int x, int y) // out parameter
//{
//	p->x = x;
//	p->y = y;
//}
//
//void ResetPoint(Point* p)
//{
//	p->x = 0;
//	p->y = 0;
//}
//
//void InitPoint(Point* p, int x, int y)
//{
//	SetPoint(p, x, y);
//	cout << "Point 초기화" << endl;
//}
//
//void UninitPoint(Point* p)
//{
//	cout << "Point 마무리" << endl;
//}
//
//int main()
//{
//	Point pt1;
//	InitPoint(&pt1, 2, 3);
//
//	PrintPoint(&pt1);
//	SetPoint(&pt1, 5, 8);
//	PrintPoint(&pt1);
//	ResetPoint(&pt1);
//	PrintPoint(&pt1);
//
//	UninitPoint(&pt1);
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p) // in parameter
//{
//	cout << p->x << ',' << p->y << endl;
//}
//
//void SetPoint(Point* p, int x, int y) // out parameter
//{
//	p->x = x;
//	p->y = y;
//}
//
//void ResetPoint(Point* p)
//{
//	p->x = 0;
//	p->y = 0;
//}
//
//int main()
//{
//	Point pt1 = { 2, 3 };
//	PrintPoint(&pt1);
//	SetPoint(&pt1, 5, 8);
//	PrintPoint(&pt1);
//	ResetPoint(&pt1);
//	PrintPoint(&pt1);
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p) // in parameter
//{
//	cout << p->x << ',' << p->y << endl;
//}
//
//void SetPoint(Point* p, int x, int y) // out parameter
//{
//	p->x = x;
//	p->y = y;
//}
//
//int main()
//{
//	Point pt1 = { 2, 3 };
//	PrintPoint(&pt1);
//	SetPoint(&pt1, 5, 8);
//	PrintPoint(&pt1);
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(const Point* p)
//{
//	cout << p->x << ',' << p->y << endl;
//}
//
//int main()
//{
//	Point pt1 = { 2, 3 };
//	PrintPoint(&pt1);
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(Point pt)
//{
//	cout << pt.x << ',' << pt.y << endl;
//}
//
//int main()
//{
//	Point pt1 = { 2, 3 };
//	PrintPoint(pt1);
//}

//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	Point pt1 = { 2, 3 };
//	cout << pt1.x << ',' << pt1.y << endl;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << 100 << ',' << "hello" << endl;
//}