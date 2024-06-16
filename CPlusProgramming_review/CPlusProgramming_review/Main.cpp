#include <iostream>
using namespace std;
template <typename T1, typename T2>

void Print(T1 t1, T2 t2) 
{
	cout << t1 << endl;
	cout << t2 << endl;
	cout << endl;
}

int main()
{
	Print(3.14, 88);
	Print("NO PAIN, NO GAIN", 1);
}