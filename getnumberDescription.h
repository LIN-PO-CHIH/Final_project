#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define endpoint 30
#define Final 3

#include "getnumber.h"

void getnumberDescription() {
	int choose = 0;
	int input = 0;

	printf("\t\t\t\t\t\t搶%d\n\n", endpoint);
	printf("\t\t\t\t遊戲規則：\n");
	printf("\t\t\t\t\t※玩家可輸入1至%d的數字\n", Final);
	printf("\t\t\t\t\t※此數字一直疊加累計\n");
	printf("\t\t\t\t\t※首先喊至或超過數字%d的一方即獲勝\n", endpoint);

	printf("\t\t\t\t遊戲選項：\n");
	printf("\t\t\t\t\t1.玩家 V S 玩家\n\n");
	printf("\t\t\t\t\t2.玩家 V S 電腦 ( 簡單 )\n\n");
	printf("\t\t\t\t\t3.玩家 V S 電腦 ( 困難 )\n\n\n");

	printf("\t\t\t\t輸入選項 : ");

	while (input == 0) {
		switch (getch(choose)) {
		case 49:	input = 1;	break;
		case 50:	input = 2;	break;
		case 51:	input = 3;	break;
		default:
			break;
		}
	}

	system("cls");
	getnumber(input);
}