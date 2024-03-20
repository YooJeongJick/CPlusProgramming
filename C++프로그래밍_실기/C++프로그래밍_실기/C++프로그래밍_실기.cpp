//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	cout << "Hello, world!" << endl;
//	int* n = (int*)malloc(sizeof(int));
//	free(n);
//
//	bool b = true;
//	cout << b << endl; // 1
//	b = false;
//	cout << b << endl; // 0
//
//	int n1 = 10;
//	int n2(20);
//	int n3{ 30 };
//	cout << n1 << endl;
//	cout << n2 << endl;
//	cout << n3 << endl;
//
//	int A = 10;
//	int B = A;
//	int& C = A;
//	A = 20;
//	cout << A << endl;
//	cout << B << endl;
//	cout << C << endl;
//}

//#include <iostream>
//using namespace std;
//
//void swap1(int* a1, int* b1)
//{
//	int data = *a1;
//	*a1 = *b1;
//	*b1 = data;
//}
//
//void swap2(int& a2, int& b2)
//{
//	int data = a2;
//	a2 = b2;
//	b2 = data;
//}
//
//int main()
//{
//	int a1 = 10;
//	int b1 = 20;
//	swap1(&a1, &b1);
//	cout << a1 << endl;
//	cout << b1 << endl;
//
//	int a2 = 10;
//	int b2 = 20;
//	swap2(a2, b2);
//	cout << a2 << endl;
//	cout << b2 << endl;
//}

//#include <iostream>
//using namespace std;
//
//void print(const char* s)
//{
//	cout << s << endl;
//}
//
//void print(int n)
//{
//	cout << n << endl;
//}
//
//void print(double d)
//{
//	cout << d << endl;
//}
//
//int main()
//{
//	print("Hello");
//	print(15);
//	print(3.14);
//}