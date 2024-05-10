#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
	IntArray arr(1000);

	arr.push_back(100);
	arr.push_back(200);
	arr.push_back(300);

	for (int i = 0; i < arr.size(); i++)
		cout << arr.at(i) << endl;
}
