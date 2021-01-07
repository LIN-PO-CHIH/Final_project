/*#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define Space 5
#define Frame 100

void move(int, int);
void point(int, int);

int symbol;


void move(int x, int y) {
	switch (getch()) {
	case 224:
		switch (getch()) {
		case 75:
			if (x > Space)
				x--;
			break;
		case 72:
			if (y > Space)
				y--;
			break;
		case 77:
			if (x < Frame)
				x++;
			break;
		case 80:
			if (y < Frame / 4)
				y++;
			break;
		default:
			break;
		}
	}

	//	system("cls");
	point(x, y);
}
void point(int x, int y) {
	COORD add;
	add.X = x;
	add.Y = y;
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, add);
	symbol = 1;
	if (symbol == 1) {
		printf("*");
	}
	else {
		printf(" ");
	}
	symbol = 0;

	move(x, y);
}

int main(void) {
	int x = Space, y = Space;

	//	while (1) {
	point(x, y);
	//	}

	system("pause");
	return 0;
}*/