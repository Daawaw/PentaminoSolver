#pragma once
#include "Pentamino.h"
#include "Figure.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "curses.h"


class Solver
{
private:
	Figure** Figures;
	size_t BoardWidth;
	size_t BoardLength;

public:
	Solver();
	void intro_pentamino() const;
	int menu_pentamino() const;
	void rules() const;
	int SizeField() ;
	void perebor(int count, std::vector<std::vector<char>> &matrix);
	void AllSolves();
	~Solver();

};
