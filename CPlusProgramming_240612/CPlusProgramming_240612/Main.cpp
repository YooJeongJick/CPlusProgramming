#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	void Print() const { cout << x << ',' << y << endl; }
	int GetX() const { return x; }
	int GetY() const { return y; }
	bool operator==(const Point& arg) const
	{
		return x == arg.x && y == arg.y;
	}
};

struct Equals
{
	bool operator()(const Point& pt)
	{
		return pt.GetX() == 2 && pt.GetY() == 8;
	}
};

struct EqualsPtr
{
	bool operator()(const Point* p)
	{
		return p->GetX() == 2 && p->GetY() == 8;
	}
};

int main()
{
	vector<Point*> v;
	v.push_back(new Point(2, 3));
	v.push_back(new Point(4, 5));
	v.push_back(new Point(2, 8));
	v.push_back(new Point(5, 6));
	v.push_back(new Point(10, 3));

	vector<Point*>::iterator iter = find_if(v.begin(), v.end(), EqualsPtr());
	v.erase(iter);


	for (vector<Point*>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		(*iter)->Print();
	}

	for (vector<Point*>::iterator iter = v.begin(); iter != v.end(); ++iter)
		delete* iter;
}

//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	bool operator==(const Point& arg) const
//	{
//		return x == arg.x && y == arg.y;
//	}
//};
//
//struct Equals
//{
//	bool operator()(const Point& pt)
//	{
//		return pt.GetX() == 2 && pt.GetY() == 8;
//	}
//};
//
//int main()
//{
//	vector<Point*> v;
//	v.push_back(new Point(2, 3));
//	v.push_back(new Point(4, 5));
//	v.push_back(new Point(2, 8));
//	v.push_back(new Point(5, 6));
//	v.push_back(new Point(10, 3));
//
//	for (vector<Point*>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		(*iter)->Print();
//	}
//
//	for (vector<Point*>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		delete *iter;
//}

//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	bool operator==(const Point& arg) const
//	{
//		return x == arg.x && y == arg.y;
//	}
//};
//
//struct Equals
//{
//	bool operator()(const Point& pt)
//	{
//		return pt.GetX() == 2 && pt.GetY() == 8;
//	}
//};
//
//int main()
//{
//	vector<Point*> v;
//	v.push_back(new Point(2, 3));
//	v.push_back(new Point(4, 5));
//	v.push_back(new Point(2, 8));
//	v.push_back(new Point(5, 6));
//	v.push_back(new Point(10, 3));
//
//	for (vector<Point*>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		(*iter)->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	bool operator==(const Point& arg) const
//	{
//		return x == arg.x && y == arg.y;
//	}
//};
//
//struct Equals
//{
//	bool operator()(const Point& pt)
//	{
//		return pt.GetX() == 2 && pt.GetY() == 8;
//	}
//};
//
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(2, 8));
//	v.push_back(Point(5, 6));
//	v.push_back(Point(10, 3));
//
//	vector<Point>::iterator iter = find(v.begin(), v.end(), Point(2, 8));
//	v.erase(iter);
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		iter->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//struct Equals
//{
//	bool operator()(const Point& pt)
//	{
//		return pt.GetX() == 2 && pt.GetY() == 8;
//	}
//};
//
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(2, 8));
//	v.push_back(Point(5, 6));
//	v.push_back(Point(10, 3));
//
//	vector<Point>::iterator iter = find_if(v.begin(), v.end(), Equals());
//	v.erase(iter);
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		iter->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//template <typename T>
//struct Predicate
//{
//	bool operator()(const T& a, const T& b) // lhs, rhs
//	{
//		return a.GetX() < b.GetX();
//	}
//};
//
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(2, 8));
//	v.push_back(Point(5, 6));
//	v.push_back(Point(10, 3));
//
//	vector<Point>::iterator iter = v.begin() + 2;
//	v.erase(iter);
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		iter->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//template <typename T>
//struct Predicate
//{
//	bool operator()(const T& a, const T& b) // lhs, rhs
//	{
//		return a.GetX() < b.GetX();
//	}
//};
//
//int main()
//{
//	list<Point> v;
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(2, 8));
//	v.push_back(Point(5, 6));
//	v.push_back(Point(10, 3));
//
//	v.push_front(Point(0, 0));
//	v.push_front(Point(1, 1));
//
//	for (list<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		iter->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//template <typename T>
//struct Predicate
//{
//	bool operator()(const T& a, const T& b) // lhs, rhs
//	{
//		return a.GetX() < b.GetX();
//	}
//};
//
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(2, 8));
//	v.push_back(Point(5, 6));
//	v.push_back(Point(10, 3));
//
//	sort(v.begin(), v.end(), Predicate<Point>());
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		iter->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//struct Predicate
//{
//	bool operator()(const Point& a, const Point& b) // lhs, rhs
//	{
//		return a.GetX() < b.GetX();
//	}
//};
//
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(2, 8));
//	v.push_back(Point(5, 6));
//	v.push_back(Point(10, 3));
//
//	sort(v.begin(), v.end(), Predicate());
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		iter->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//bool cmp(const Point& a, const Point& b) // lhs, rhs
//{
//	return a.GetX() < b.GetX();
//}
//
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(2, 8));
//	v.push_back(Point(5, 6));
//	v.push_back(Point(10, 3));
//
//	sort(v.begin(), v.end(), cmp);
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		iter->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() const { cout << x << ',' << y << endl; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(2, 3));
//	v.push_back(Point(4, 5));
//	v.push_back(Point(2, 8));
//	v.push_back(Point(5, 6));
//	v.push_back(Point(10, 3));
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		//Point pt = *iter;
//		////*iter, 포인트 객체
//		//pt.Print();
//
//		//(*iter).Print();
//		iter->Print();
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	//find(v.begin(), v.end(), 10); // 이터 반환
//	vector<int>::iterator iter = find(v.begin(), v.end(), 10);
//
//	if (iter != v.end())
//		cout << "찾은 원소 : " << *iter << endl;
//	else
//		cout << "원소 없음!" << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	sort(v.begin(), v.begin() + 3);
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";  // 앞에만 정렬
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	vector<int>::iterator iter = v.begin();
//	cout << *iter << endl;
//	++iter;
//	cout << *iter << endl; // 20
//
//	// iter, 비교 가능
//	cout << (iter == v.end()) << endl; // false -> 0
//	cout << (iter != v.end()) << endl; // 1
//
//	iter += 2;
//	cout << (iter == v.end()) << endl; // false -> 0
//	cout << (iter != v.end()) << endl; // 1
//}

//P2
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <iterator>
//using namespace std;
//
//class Test
//{
//public:
//	class Inner_Test
//	{
//
//	};
//};
//
//class Test2
//{
//public:
//	class Inner_Test
//	{
//
//	};
//};
//
//int main()
//{
//	Test t;
//	Test::Inner_Test it;
//	vector<int> v;
//	
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	for (unsigned int i = 0; i < v.size(); ++i)
//		// v.size, unsigned 반환
//		cout << v[i] << ',' << v.at(i) << endl;
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << endl;
//
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(45);
//	v.push_back(67);
//	v.push_back(20);
//	v.push_back(85);
//	v.push_back(32);
//
//	for_each(v.begin(), v.end(), [](int n) { cout << n << endl; });
//	cout << endl;
//	sort(v.begin(), v.end());
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\n"));
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << endl;
//	cout << endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//	std::vector<int> v;
//
//	v.push_back(45);
//	v.push_back(67);
//	v.push_back(20);
//	v.push_back(85);
//	v.push_back(32);
//
//	for_each(v.begin(), v.end(), [](int n) { std::cout << n << std::endl; });
//	std::cout << std::endl;
//	sort(v.begin(), v.end());
//	copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, ""));
//	sort(v.begin(), v.end(), std::greater<int>());
//	for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		std::cout << *iter << std::endl;
//	std::cout << std::endl;
//}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//template <typename T>
//class Stack
//{
//	T* buf;
//	int capacity;
//	int size;
//public:
//	Stack(int cap = 1000) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new T[capacity];
//	}
//
//	~Stack()
//	{
//		delete[] buf;
//	}
//
//	void push(const T& data)
//	{
//		if (size < capacity)
//			buf[size++] = data;
//	}
//
//	void pop()
//	{
//		--size;
//	}
//
//	bool empty() const
//	{
//		return size == 0;
//	}
//
//	const T& top() const
//	{
//		return buf[size - 1];
//	}
//
//};
//
//int main()
//{
//	Stack<string> st;
//
//	st.push("10");
//	st.push("20");
//	st.push("30");
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//template <typename T>
//class Stack
//{
//	T* buf;
//	int capacity;
//	int size;
//public:
//	Stack(int cap = 1000) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new T[capacity];
//	}
//
//	~Stack()
//	{
//		delete[] buf;
//	}
//
//	void push(const T& data)
//	{
//		if (size < capacity)
//			buf[size++] = data;
//	}
//
//	void pop()
//	{
//		--size;
//	}
//
//	bool empty() const
//	{
//		return size == 0;
//	}
//
//	const T& top() const
//	{
//		return buf[size - 1];
//	}
//
//};
//
//int main()
//{
//	Stack<string> st;
//
//	st.push("10");
//	st.push("20");
//	st.push("30");
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//template <typename T>
//class Stack
//{
//	T* buf;
//	int capacity;
//	int size;
//public:
//	Stack(int cap = 1000) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new T[capacity];
//	}
//
//	~Stack()
//	{
//		delete[] buf;
//	}
//
//	void push(T data)
//	{
//		if (size < capacity)
//			buf[size++] = data;
//	}
//
//	void pop()
//	{
//		--size;
//	}
//
//	bool empty() const
//	{
//		return size == 0;
//	}
//
//	T top() const
//	{
//		return buf[size - 1];
//	}
//
//};
//
//int main()
//{
//	Stack<string> st;
//
//	st.push("10");
//	st.push("20");
//	st.push("30");
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//class Stack
//{
//	int* buf;
//	int capacity;
//	int size;
//public:
//	Stack(int cap = 1000) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new int[capacity];
//	}
//
//	~Stack()
//	{
//		delete[] buf;
//	}
//
//	void push(int data)
//	{
//		if (size < capacity)
//			buf[size++] = data;
//	}
//
//	void pop()
//	{
//		--size;
//	}
//
//	bool empty() const
//	{
//		return size == 0;
//	}
//
//	int top() const
//	{
//		return buf[size-1];
//	}
//
//};
//
//int main()
//{
//	Stack st;
//
//	st.push(10);
//	st.push(20);
//	st.push(30);
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//class Stack
//{
//public:
//	void push(int data)
//	{
//
//	}
//
//	void pop()
//	{
//
//	}
//
//	bool empty() const
//	{
//		return false;
//	}
//
//	int top() const
//	{
//		return 0;
//	}
//
//};
//
//int main()
//{
//	Stack st;
//
//	st.push(10);
//	st.push(20);
//	st.push(30);
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//typedef stack<int> Stack;
//
//int main()
//{
//	Stack st;
//
//	st.push(10);
//	st.push(20);
//	st.push(30);
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//}