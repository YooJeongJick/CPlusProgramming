//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n", 'A');
//	printf("%d\n", 100);
//	printf("%s\n", "hello");
//}

//#include <iostream> // 확장자가 없어도 헤더
//using namespace std; // cout 사용 위해서 추가
//
//int main()
//{
//	// cout : 출력 스트림 객체
//	// << : 출력 스트림 연산자
//	// endl : 상수('\n')
//	cout << 'A' << endl;
//	cout << 100 << endl;
//	cout << "hello" << '\n';
//}

//#include <iostream> // 확장자가 없어도 헤더
//using namespace std; // cout 사용을 위해 추가
//
//void PrintInteger(int n)
//{
//	cout << n << endl;
//}
//
//void PrintString(const char* s)
//{
//	cout << s << endl;
//}
//
//int main()
//{
//	int a = 10;
//	const char* s = "Hello";
//
//	PrintInteger(a);
//	PrintString(s);
//
//	cout << &a << endl;
//	cout << &s << endl;
//	cout << &PrintInteger << endl;
//	cout << &PrintString << endl;
//	//cout << PrintString << endl; 상관 없음
//}

//#include <iostream> // 확장자가 없어도 헤더
//using namespace std; // cout 사용을 위해 추가
//
//void PrintInteger(int n)
//{
//	cout << n << endl;
//}
//
//void PrintString(const char* s)
//{
//	cout << s << endl;
//}
//
//int main()
//{
//	int a = 10;
//	void (*pf)(int) = PrintInteger;
//	int* pa = &a;
//
//	cout << sizeof(pf) << endl;
//	cout << sizeof(pa) << endl;
//
//	pf(10);
//	cout << *pa << endl;
//}
// 2P

//#include <iostream> // 확장자가 없어도 헤더
//using namespace std; // cout 사용을 위해 추가
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	
//	for (int i = 0; i < 5; ++i)
//		cout << i << " : " << arr[i] << endl;
//
//	cout << arr + 3 << endl;
//	cout << &arr[3] << endl;
//
//	int* p = arr + 3;
//	cout << *p << endl;
//	cout << arr[3] << endl;
//}
//P3

//#include <iostream> // 확장자가 없어도 헤더
//using namespace std; // cout 사용을 위해 추가
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//
//	for (int i = 0; i < 5; ++i)
//		cout << i << " : " << arr[i] << endl;
//
//	int* parr = arr;
//	for (int i = 0; i < 5; ++i)
//		cout << i << " : " << parr[i] << endl;
//}

//#include <iostream> // 확장자가 없어도 헤더
//using namespace std; // cout 사용을 위해 추가
//
//void PrintArray(int* parr)
//{
//	for (int i = 0; i < 5; ++i)
//		cout << i << " : " << parr[i] << endl;
//
//}
//
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//
//	for (int i = 0; i < 5; ++i)
//		cout << i << " : " << arr[i] << endl;
//
//	int* parr = arr;
//	for (int i = 0; i < 5; ++i)
//		cout << i << " : " << parr[i] << endl;
//
//	PrintArray(arr);
//}

//#include <iostream> // 확장자가 없어도 헤더
//using namespace std; // cout 사용을 위해 추가
//
//void PrintArray(int* parr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << i << " : " << parr[i] << endl;
//	cout << endl;
//}
//
//int main()
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[5] = { 10, 20, 30, 40, 50 };
//	int arr3[4] = { 101, 102, 103, 104 };
//
//	PrintArray(arr1, 3);
//	PrintArray(arr2, 5);
//	PrintArray(arr3, 4);
//}

//#include <iostream> // 확장자가 없어도 헤더
//using namespace std; // cout 사용을 위해 추가
//
//void PrintArray(int* parr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << i << " : " << parr[i] << endl;
//	cout << endl;
//}
//
//int main()
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[5] = { 10, 20, 30, 40, 50 };
//	int arr3[4] = { 101, 102, 103, 104 };
//
//	PrintArray(arr1, sizeof(arr1) / sizeof(int));
//	PrintArray(arr2, sizeof(arr2) / sizeof(int));
//	PrintArray(arr3, sizeof(arr3) / sizeof(int));
//}
//P4

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//void PrintArray(int* parr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << i << " : " << parr[i] << endl;
//	cout << endl;
//}
//
//int main()
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[5] = { 10, 20, 30, 40, 50 };
//	int arr3[4] = { 101, 102, 103, 104 };
//
//	PrintArray(arr1, 3);
//	PrintArray(arr2, 5);
//	PrintArray(arr3, 4);
//
//	int* parr1 = (int*)malloc(sizeof(int) * 3);
//	parr1[0] = 1;
//	parr1[1] = 2;
//	parr1[2] = 3;
//	PrintArray(parr1, 3);
//
//	int* parr2 = (int*)malloc(sizeof(int) * 5);
//	parr2[0] = 10;
//	parr2[1] = 20;
//	parr2[2] = 30;
//	parr2[3] = 40;
//	parr2[4] = 50;
//	PrintArray(parr2, 5);
//
//	int* parr3 = (int*)malloc(sizeof(int) * 4);
//	parr3[0] = 101;
//	parr3[1] = 102;
//	parr3[2] = 103;
//	parr3[3] = 104;
//	PrintArray(parr3, 4);
//
//	free(parr1);
//	free(parr2);
//	free(parr3);
//}

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//void PrintArray(int* parr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << i << " : " << parr[i] << endl;
//	cout << endl;
//}
//
//int main()
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[5] = { 10, 20, 30, 40, 50 };
//	int arr3[4] = { 101, 102, 103, 104 };
//
//	PrintArray(arr1, 3);
//	PrintArray(arr2, 5);
//	PrintArray(arr3, 4);
//
//	int* parr1 = new int[3] { 1, 2, 3 };
//	PrintArray(parr1, 3);
//
//	int* parr2 = new int[5] { 10, 20, 30, 40, 50 };
//	PrintArray(parr2, 5);
//
//	int* parr3 = new int[4] { 101, 102, 103, 104 };
//	PrintArray(parr3, 4);
//
//	delete[] parr1;
//	delete[] parr2;
//	delete[] parr3;
//}
// P5

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//int main()
//{
//	//char buf1[100] = { 'H', 'e', 'l', 'l', 'o' };
//	//char buf1[100] = { 'H', 'e', 'l', 'l', 'o', '\0' }; 
//	char buf1[100] = "Hello"; // 위와 모두 동일
//	//문자열,  끝에 널문자를 포함한 연속되는 문자 집합
//
//	cout << "string : " << buf1 << endl;
//	cout << "string : " << buf1 + 1 << endl;
//	cout << "string : " << buf1  + 2 << endl;
//	// 시작 주소를 가져오면 널문자가 나올 떄 까지 출력
//}
//P6

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//int main()
//{
//	const char* buf1 = "Hello";
//
//	cout << "string : " << buf1 << endl;
//	cout << "string : " << buf1 + 1 << endl;
//	cout << "string : " << buf1 + 2 << endl;
//	// 시작 주소를 가져오면 널문자가 나올 떄 까지 출력
//
//	cout << buf1[1] << ", " << *(buf1 + 1) << endl; // 'e' 추출
//}
//P7

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//int main()
//{
//	bool b = true;
//	cout << b << endl;
//	b = false;
//	cout << b << endl;
//}

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//int main()
//{
//	int a = 10;
//	int b(10);
//	int c{ 10 };
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//typedef int* PINT;
//int main()
//{
//	cout << int() << endl;
//	cout << double() << endl;
//	cout << PINT() << endl;
//}
//P8

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//int main()
//{
//	int n = 10;
//	int k = n;
//	int& r = n;
//
//	cout << n << " : " << &n << endl;
//	cout << k << " : " << &k << endl;
//	cout << r << " : " << &r << endl;
//}

// 중요한 문법!! 별 2개
//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//int main()
//{
//	int n = 10;
//	int k = n;
//	int& r = n;
//
//	n = 20;
//	cout << n << " : " << &n << endl;
//	cout << k << " : " << &k << endl;
//	cout << r << " : " << &r << endl;
//}

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//void Swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	cout << a << ',' << b << endl;
//	Swap(&a, &b);
//	cout << a << ',' << b << endl;
//}

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	cout << a << ',' << b << endl;
//	Swap(a, b);
//	cout << a << ',' << b << endl;
//}

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//void Add(int a, int b, int* psum)
//{
//	*psum = a + b;
//}
//
//int main()
//{
//	int result = 0;
//
//	Add(10, 20, &result);
//	cout << result << endl;
//}

//#include <iostream> // 확장자가 없어도 헤더
//#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
//using namespace std; // cout 사용을 위해 추가
//
//void Add(int a, int b, int& sum)
//{
//	sum = a + b;
//}
//
//int main()
//{
//	int result = 0;
//
//	Add(10, 20, result);
//	cout << result << endl;
//}

#include <iostream> // 확장자가 없어도 헤더
#include <cstdlib> // <stdlib.h>, 앞에 C가 붙고 .h가 없는 게 C++ 표준
using namespace std; // cout 사용을 위해 추가

void Print(const char* s)
{
	cout << "string : " << s << endl;
}

void Print(int n)
{
	cout << "int : " << n << endl;
}

void Print(double d)
{
	cout << "double : " << d << endl;
}

int main()
{
	// function overloading(함수 중복) : 서로다른 매개변수의 같은 이름 함수 정의
	Print("Hello!");
	Print(10);
	Print(4.55);
}
// 오류 확인