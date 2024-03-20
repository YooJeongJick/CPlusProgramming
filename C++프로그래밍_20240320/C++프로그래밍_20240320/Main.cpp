#include <iostream>
#include <cstring> // C에선 #include <string.h>
using namespace std;

int main()
{
	int size = 10;
	char s1[10] = "Hello!";
	//char s1[size] = "Hello!"; // 정적 배열이라 불가능
	char* s2 = new char[size];

	strcpy_s(s2, strlen(s1) + 1, s1);

	cout << "s1 : " << s1 << endl;
	cout << "s2 : " << s2 << endl;
}

// P6
//#include <iostream>
//#include <cstring> // C에선 #include <string.h>
//using namespace std;
//
//int main()
//{
//	char s1[10] = "Hello!";
//	char* s2 = new char[10];
//
//	strcpy_s(s2, strlen(s1) + 1, s1);
//	cout << "s1 : " << s1 << endl;
//	cout << "s2 : " << s2 << endl;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* p = new int[4] { 10, 20, 30, 40 };
//
//	cout << p[0] << endl;
//	cout << p[1] << endl;
//	cout << p[2] << endl;
//	cout << p[3] << endl;
//	delete[] p;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* p = new int[4];
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	cout << p[0] << endl;
//	cout << p[1] << endl;
//	cout << p[2] << endl;
//	cout << p[3] << endl;
//	delete[] p;
//}

// P4
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* p = new int(10);
//	cout << *p << endl;
//	delete p;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* p = new int;
//	*p = 10;
//	cout << *p << endl;
//	delete p;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	const char* s = "Hello";
//	cout << s << endl;
//}

// P3
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void IncrementArray(int* parr)
//{
//	for (int i = 0; i < 5; ++i)
//		++parr[i];
//}
//
//void PrintArray(const int* parr)
//{
//	for (int i = 0; i < 5; ++i)
//		cout << parr[i] << endl;
//}
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//
//	IncrementArray(arr);
//	PrintArray(arr);
//
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void PrintArray(const int* parr)
//{
//	for (int i = 0; i < 5; ++i)
//		cout << parr[i] << endl;
//}
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//
//	PrintArray(arr);
//
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	const int* parr = arr;
//
//	parr[0] = 100;
//	parr[3] = 500;
//	for (int i = 0; i < 5; i++)
//		cout << parr[i] << endl;
//	//오류
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int* parr = arr;
//
//	parr[0] = 100;
//	parr[3] = 500;
//	for (int i = 0; i < 5; i++)
//		cout << parr[i] << endl;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int* parr = arr;
//
//	for (int i = 0; i < 5; i++)
//		cout << parr[i] << endl;
//}

//P2
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n = 10; // const 문법 : **
//	int* p1 = &n;
//	const int* p2 = &n;
//	int* const p3 = &n;
//	const int* const p4 = &n;
//
//	int m = 20;
//	p2 = &m;
//	//*p2 = 100; // 변경 불가
//
//	cout << *p1 << ", " << *p2 << ", " << *p3 << ", " << *p4 << endl;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n = 10; // const 문법 : **
//	int* p1 = &n;
//	const int* p2 = &n;
//	int* const p3 = &n;
//	const int* const p4 = &n;
//
//	cout << *p1 << ", " << *p2 << ", " << *p3 << ", " << *p4  << endl;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n = 10; // R(ead), W(rite)
//	const int cn = 20; // R
//
//	cout << n << ", " << cn << endl;
//	n = 100;
//	cn = 100;
//	cout << n << ", " << cn << endl;
//	// 오류
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n = 10;
//	const int cn = 20;
//
//	cout << n << ", " << cn << endl;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void Print(int a, int b, int c, const char* msg="")
//{
//	cout << msg <<  ":" << a << ',' << b << ',' << c << endl;
//}
//
//int main()
//{
//	// default parameter value
//	Print(1, 2, 3);
//	Print(10, 20, 30, "정수");
//	Print(35, 23, 89, "램덤수");
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std; 
//
//void Print(int a=0, int b=0, int c=0)
//{
//	cout << a << ',' << b << ',' << c << endl;
//}
//
//int main()
//{
//	// default parameter value
//	Print(1, 2, 3);
//	Print(10, 20);
//	Print();
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std; // std :  C++ 표준 네임스페이스
//
//int main()
//{
//	cout << 100 << endl;
//	string s = "Hello";
//	vector<int> v(5);
//
//	cout << s << endl;
//	cout << v[0] << endl;
//}

//#include <iostream>
//using namespace std;
//
//namespace A // 정의
//{
//	void Print(const char* s)
//	{
//		cout << "string : " << s << endl;
//	}
//}
//
//namespace B // 정의
//{
//	void Print(const char* s)
//	{
//		cout << "namespace B : " << s << endl;
//	}
//	namespace Inner
//	{
//		int X = 100;
//	}
//}
//
//int main()
//{
//	A::Print("Hello"); 
//	B::Print("Hello");
//	cout << B::Inner::X << endl;
//}

//#include <iostream>
//using namespace std;
//
//namespace A // 정의
//{
//	void Print(const char* s)
//	{
//		cout << "string : " << s << endl;
//	}
//}
//
//namespace B // 정의
//{
//	void Print(const char* s)
//	{
//		cout << "namespace B : " << s << endl;
//	}
//	int X = 100;
//}
//
//
////using B::Print; // 2. using 사용
//using namespace B; // 3. using namespace 사용
//
//int main()
//{
//	A::Print("Hello"); // 1. 명시
//	Print("Hello");
//	cout << X << endl;
//}

//#include <iostream>
//using namespace std;
//
//namespace A // 정의
//{
//	void Print(const char* s)
//	{
//		cout << "string : " << s << endl;
//	}
//}
//
//namespace B // 정의
//{
//	void Print(const char* s)
//	{
//		cout << "namespace B : " << s << endl;
//	}
//}
//
//using B::Print; // 2. using 사용
//
//int main()
//{
//	A::Print("Hello"); // 1. 명시
//	Print("Hello");
//}


//#include <iostream>
//using namespace std;
//
//namespace A // 정의
//{
//	void Print(const char* s)
//	{
//		cout << "string : " << s << endl;
//	}
//}
//
//namespace B // 정의
//{
//	void Print(const char* s)
//	{
//		cout << "namespace B : " << s << endl;
//	}
//}
//
//int main()
//{
//	A::Print("Hello");
//	B::Print("Hello");
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Hello!" << endl;
//	cout << 100 << endl;
//	cout << 'A' << endl;
//}

//#include <iostream>
//
//int main()
//{
//	std::cout << "Hello!" << std::endl;
//	std::cout << 100 << std::endl;
//	std::cout << 'A' << std::endl;
//}