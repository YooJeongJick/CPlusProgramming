#include <iostream>
using namespace std;

int main()
{
	int* p = new int;
	*p = 10;
	cout << *p << endl;
	delete p;

	int* parr = new int[3];
	delete[] parr;
}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 10;
//	const int* p1 = &n;
//	int* const p2 = &n;
//
//	int m = 20;
//	p1 = &m;
//	//*p1 = 200;
//
//	//p2 = &n;
//	*p2 = 100;
//}

//#include <iostream>
//using namespace std;
//
//void Print(const char* name, int birth = 0)
//{
//	cout << name << " / Ãâ»ý : " << birth << endl;
//}
//
//int main()
//{
//	Print("±è¹ÎÁö", 2004);
//	Print("ÆÊÇÏ´Ï", 2004);
//	Print("´Ù´Ï¿¤");
//}

//#include <iostream>
//using namespace std;
//
//namespace A
//{
//	void Print(const char* s)
//	{
//		cout << "Print(A) : " << s << endl;
//	}
//}
//
//namespace B
//{
//	void Print(const char* s)
//	{
//		cout << "Print(B) : " << s << endl;
//	}
//	int Bn = 10;
//	namespace BInner
//	{
//		int BIn = 100;
//	}
//}
//
//using B::Print;
//using namespace B;
//
//int main()
//{
//	A::Print("Also it diito");
//	Print("¸»ÇØÁà Say it back");
//	cout << Bn << endl;
//	cout << B::BInner::BIn << endl;
//}