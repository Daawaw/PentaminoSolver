#pragma once
#include <iostream>
#include <vector>
#include "point.h"

class Figure
{
protected:
	Point x;
	Point y;
	Point z;
	Point k;
	Point n;
	size_t position;
	char type;
	size_t NumberOfPosition;
public:
	Figure();
	virtual void Turn() = 0;
	char GetType();
	size_t GetNumberOfPosition();
	void Reset(int i, int j, std::vector<std::vector<char>> &matrix);
	bool Set(int i, int j, int max_x, int max_y, std::vector<std::vector<char>> &matrix);
	~Figure();

};