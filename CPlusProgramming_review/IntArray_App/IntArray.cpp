#include "IntArray.h"
#include <iostream>
using namespace std;

IntArray::IntArray(int size)
{
	buf = new int[size];
	pidx = 0;
}

IntArray::~IntArray()
{
	delete[] buf;
}

void IntArray::push_back(int idx)
{
	buf[pidx++] = idx;
}

int IntArray::size() const
{
	return pidx;
}

int IntArray::at(int idx) const
{
	return buf[idx];
}



