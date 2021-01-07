#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define endpoint 30
#define Final 3

#include "getnumberDescription.h"

void space(int, int);
void move(int, int);
void again(bool);


void again(bool choice) {
	if (choice == true) {
		getnumberDescription();
	}
	else {
		printf("關閉遊戲...");
		Sleep(2000);
	}
}

void move(int x, int y) {
	int record = y;
	bool ag = false;

	switch (getch()) {
	case 13:
		record = 10000;
		break;
	case 224:
	case 75:
		if (y > 15) {
			y = y - 10;
		}
		break;
	case 72:
		if (y > 15)
			y = y - 10;
		break;
	case 77:
		if (y < 15)
			y = y + 10;
		break;
	case 80:
		if (y < 15)
			y = y + 10;
		break;
	default:
		break;

	}

	if ((record != 10000)) {
		system("cls");
		space(x, y);
	}
	else if (record == 10000) {
		if (y == 10)
			ag = true;
		system("cls");
		again(ag);
	}
}

void space(int x, int y) {
	printf("\n\n\n\n\n\t\t\t\t\t\t請問是否要繼續遊戲？");
	printf("\n\n\n\n\n\t\t\t\t\t\t\t是");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t否");
	COORD add;
	add.X = x;
	add.Y = y;
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, add);
	printf("*");

	move(x, y);
}