#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define endpoint 30
#define Final 3

bool ag;
bool initial = true;
//int Bouncejump = 0;

#include "getnumberDescription.h"

void space(int, int);
void move(int, int);
void again(bool);

void again(bool choice) {
	if (choice != true) {
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t關閉遊戲...");
		for (int i = 0; i < 3; i++) {
			Sleep(1000);
			printf(".");
		}
	}else {
		ag = true;
	}
}

void move(int x, int y) {
	int record = 0;
	ag = false;

	switch (getch()) {
	case 13:
		record = 1;
		break;
	case 224:
	case 72: case 75:
			y = 10;
		break;
	case 77: case 80:
			y = 20;
		break;
	default:
		break;

	}
	system("cls");

	if (record == 1) {
		if (y == 10)
			ag = true;
		again(ag);
	}else{
		space(x, y);
	}
}

void space(int x, int y) {
	COORD add, quiz, yes, no;
	add.X = x;		add.Y = y;
	quiz.X = 47;	quiz.Y = 6;
	yes.X = 55;		yes.Y = 10;
	no.X = 55;		no.Y = 20;
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, quiz);
	printf("請問是否要繼續遊戲？");
	SetConsoleCursorPosition(hOut, yes);
	printf("是");
	SetConsoleCursorPosition(hOut, no);
	printf("否");
	SetConsoleCursorPosition(hOut, add);
	printf("*");

	move(x, y);
}

int  main() {
	int x = 40, y = 10;
		
	do {
		getnumberDescription();
		system("pause");
		system("cls");
		space(x, y);
	} while (ag == true);
	return 0;
}