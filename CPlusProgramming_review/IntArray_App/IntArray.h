#pragma once

class IntArray {
private:
	int* buf;
	int pidx;
public:
	IntArray(int size);
	~IntArray();
	void push_back(int idx);
	int size() const;
	int at(int idx) const;
};

