#include "Figure.h"


Figure::Figure()
{
	position = 0;
}

Figure::~Figure()
{

}

char Figure::GetType()
{
	return type;
}

size_t Figure::GetNumberOfPosition()
{
	return NumberOfPosition;
}

bool Figure::Set(int i, int j, int max_x, int max_y, std::vector<std::vector<char>> &matrix)
{

	if ((i + x.x < max_x) && (i + y.x < max_x) && (i + z.x < max_x) && (i + k.x < max_x) && (i + n.x < max_x) && (j + x.y < max_y) && (j + y.y < max_y) && (j + z.y < max_y) && (j + k.y < max_y) && (j + n.y < max_y))
	{

		int count = 0;
		if (matrix[j + x.y][i + x.x] == '0')
		{
			count++;
		}
		if (matrix[j + y.y][i + y.x] == '0')
		{
			count++;
		}
		if (matrix[j + z.y][i + z.x] == '0')
		{
			count++;
		}
		if (matrix[j + k.y][i + k.x] == '0')
		{
			count++;
		}
		if (matrix[j + n.y][i + n.x] == '0')
		{
			count++;
		}
		if (count == 5)
		{
			matrix[j + x.y][i + x.x] = type;
			matrix[j + y.y][i + y.x] = type;
			matrix[j + z.y][i + z.x] = type;
			matrix[j + k.y][i + k.x] = type;
			matrix[j + n.y][i + n.x] = type;
			return true;
		}
	}
	return false;
}
void Figure::Reset(int i, int j, std::vector<std::vector<char>> &matrix)
{
	matrix[j + x.y][i + x.x] = '0';
	matrix[j + y.y][i + y.x] = '0';
	matrix[j + z.y][i + z.x] = '0';
	matrix[j + k.y][i + k.x] = '0';
	matrix[j + n.y][i + n.x] = '0';
}

std::ostream& operator<< (std::ostream& os, Point p)
{
	os << "(" << p.x << ", " << p.y << ")" << "\n";

	return os;
}



