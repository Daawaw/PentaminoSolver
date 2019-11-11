#include "curses.h"
#include "header.h"

void intro_pentamino() {
	start_color();
	init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
	move(10, 50);
	attron(COLOR_PAIR(1));
	printw("PENTAMINO");
	getch();
	clear();
}
int menu_pentamino() {
	move(5, 55);
	printw("MENU");
	attroff(A_BOLD);
	attroff(A_UNDERLINE);
	move(9, 50);
	printw("1 - start the solver");
	move(11, 50);
	printw("2 - rules of the pentamino");
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

void interface_pentamino() {
	initscr();
	noecho();
	intro_pentamino();
	int c = 0;
	while (c != 3) {
		c = menu_pentamino();
	}
}

