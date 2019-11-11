#include "Solver.h"

Solver::Solver()
{
	int i = 0;
	Figures = new Figure*[12];
	Figures[i] = new PentaminoF();
	i++;
	Figures[i] = new PentaminoI();
	i++;
	Figures[i] = new PentaminoL();
	i++;
	Figures[i] = new PentaminoN();
	i++;
	Figures[i] = new PentaminoP();
	i++;
	Figures[i] = new PentaminoT();
	i++;
	Figures[i] = new PentaminoU();
	i++;
	Figures[i] = new PentaminoV();
	i++;
	Figures[i] = new PentaminoW();
	i++;
	Figures[i] = new PentaminoY();
	i++;
	Figures[i] = new PentaminoX();
	i++;
	Figures[i] = new PentaminoZ();
}

void Solver::intro_pentamino() const {
	start_color();
	init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
	move(10, 50);
	attron(COLOR_PAIR(1));
	printw("PENTAMINO");
	attroff(COLOR_PAIR(1));
	getch();
	clear();
}
int Solver::menu_pentamino() const {
	
	move(5, 55);
	printw("MENU");
	move(9, 50);
	printw("1 - start the solver");
	move(11, 50);
	printw("2 - About the pentamino");
	move(13, 50);
	printw("3 - EXIT");
	move(17, 35);
	printw("To select an option, press the key corresponding\n\t\t\t\t\tto the number of the selected option.");
	int c = 0;
	while (c != '3') {
		c = getch();
		if (c == '1') {
			clear();
			return 1;
		}
		if (c == '2') {
			clear();
			return 2;
		}
	}
	clear();
	return 3;
}

void Solver::rules() const {
	move(10, 25);
	printw("  A standard pentomino puzzle is to tile a rectangular box with the pentominoes,");
	move(12, 25);
	printw("i.e. cover it without overlap and without gaps.");
	getch();
	clear();
}

int Solver::SizeField()  {
	clear();
	start_color();
	init_pair(2, COLOR_RED, COLOR_BLACK);
	move(2, 50);
	printw("Choose size: ");
	move(5, 50);
	printw("1 -> 6 x 10");
	move(7, 50);
	printw("2 -> 5 x 12");
	move(9, 50);
	printw("3 -> 4 x 15");
	move(11, 50);
	printw("4 -> 3 x 20");
	move(13, 50);
	printw("To select an option, press the key corresponding");
	move(15, 50);
	printw("to the number of the selected option.");
	int c = 0;
	while (c != KEY_END) {
		c = getch();
		if (c == '1') {
			clear();
			return 1;
		}
		if (c == '2') {
			clear();
			return 2;
		}
		if (c == '3') {
			clear();
			return 3;
		}
		if (c == '4') {
			clear();
			return 4;
		}

	}
	/*char elements[] = "1234";
	while (key != KEY_END) {
		key = getch();
		for (int i = 0; i < 11; i++) {
			if (key == elements[i]) {
				clear();
				return i + 1;
			}
		}
	}
*/
}



void Solver::AllSolves(){
initscr();
noecho();
intro_pentamino();
int SavedKey = 0;
while (SavedKey != 3) {
	SavedKey = menu_pentamino();
	if (SavedKey == 1) {
		int SavedSize = SizeField();
		if (SavedSize == 1) {
			BoardWidth = 6;
			BoardLength = 10;
		}
		else if (SavedSize == 2) {
			BoardWidth = 5;
			BoardLength = 12;
		}
		else if (SavedSize == 3) {
			BoardWidth = 4;
			BoardLength = 15;
		}
		else if (SavedSize == 4) {
			BoardWidth = 3;
			BoardLength = 20;
		}

		clear();
		move(10, 35);
		printw("Solutions are sought, wait a bit");
		refresh();
		std::vector<std::vector<char>> matrix(BoardWidth + 1);
		for (int i = 0; i <= BoardWidth; i++)
		{
			for (int j = 0; j <= BoardLength; j++)
				matrix[i].push_back('0');
		}
		int count = 0;
		std::ofstream fout;
		fout.open("out.txt", std::ios::out);
		fout.close();
		//perebor(count, matrix);
		attroff(COLOR_PAIR(2));
		clear();
		attron(COLOR_PAIR(1));
		move(10, 50);
		printw("All solutions found:)");
		move(12, 50);
		printw("Press any key to continue.");
		getch();
		clear();
	}
}
if (SavedKey == 2) {
	rules();
}
if (SavedKey == 3) {
	clear();
	move(5, 45);
	printw("Goodbye!");
	getch();
}
endwin();
	}


void Solver::perebor(int count, std::vector<std::vector<char>> &matrix)
{
	for (int i = 0; i < BoardWidth; i++)
	{
		for (int j = 0; j < BoardLength; j++)
		{
			for (int k = 0; k < Figures[count]->GetNumberOfPosition(); k++)
			{
				if (Figures[count]->Set(j, i, BoardLength, BoardWidth, matrix))
				{
					if (count == 12 - 1)
					{
						std::ofstream fout;
						fout.open("out.txt", std::ios::app);
						for (int i = 0; i < BoardWidth; i++)
						{
							for (int j = 0; j < BoardLength; j++)
								fout << matrix[i][j] << " ";
							fout << std::endl;
						}
						fout << std::endl;
						fout.close();
					}
					else
					{
						perebor(count + 1, matrix);
					}
					Figures[count]->Reset(j, i, matrix);
				}
				Figures[count]->Turn();
			}
		}
	}
}

Solver::~Solver()
{
	delete[] Figures;
}