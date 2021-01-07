#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define endpoint 30
#define Final 3

void getnumber(int input) {
	int Calculation = 0;
	int num[2];
	bool end = false;
	if (input == 1) {
		int people;
		printf("請輸入玩家人數( Enter確認 ):");
		scanf_s("%d", &people);
		while (Calculation < endpoint) {
			for (int i = 0; i < people; i++) {
				if (end == false) {
					do {
						printf("\n玩家%d請輸入數字：", i + 1);
						num[i] = getch(num[i]) - 48;
						printf("%d", num[i]);
						if (num[i] < 1 || num[i] > Final)
							printf("\n輸入錯誤！\n");
					} while (num[i] < 1 || num[i] > Final);
					Calculation = Calculation + num[i];
					if (Calculation >= endpoint) {
						printf("\n\n玩家%d獲勝!!!\n\n", i + 1);
						end = true;
					}
					else {
						printf("\n\n\t\t\t▲目前計數：%d\n", Calculation);
					}
				}
			}
		}
	}
	else if (input == 2) {
		srand((unsigned)time(NULL));
		while (Calculation < endpoint) {
			if (end == false) {
				do {
					printf("\n玩家請輸入數字：");
					num[0] = getch(num[0]) - 48;
					printf("%d", num[0]);
					if (num[0] < 1 || num[0] > Final)
						printf("\n輸入錯誤！\n");
				} while (num[0] < 1 || num[0] > Final);
				Calculation = Calculation + num[0];
				if (Calculation >= endpoint) {
					printf("\n\n玩家獲勝!!!\n\n");
					end = true;
				}
				else {
					printf("\n\n\t\t\t▲目前計數：%d\n", Calculation);
					num[1] = rand() % Final + 1;
					printf("\n電腦輸入的數字：%d", num[1]);
					Calculation = Calculation + num[1];
					if (Calculation >= endpoint) {
						printf("\n\n電腦獲勝!!!\n\n");
						end = true;
					}
					else {
						printf("\n\n\t\t\t▲目前計數：%d\n", Calculation);
					}
				}
			}
		}
	}
	else if (input == 3) {
		num[1] = endpoint % (Final + 1);
		printf("\n電腦輸入的數字：%d", num[1]);
		Calculation = Calculation + num[1];
		printf("\n\n\t\t\t▲目前計數：%d\n", Calculation);
		while (Calculation < endpoint) {
			if (end == false) {
				do {
					printf("\n玩家請輸入數字：");
					num[0] = getch(num[0]) - 48;
					printf("%d", num[0]);
					if (num[0] < 1 || num[0] > Final)
						printf("\n輸入錯誤！\n");
				} while (num[0] < 1 || num[0] > Final);
				Calculation = Calculation + num[0];
				if (Calculation >= endpoint) {
					printf("\n\n玩家獲勝!!!\n\n");
					end = true;
				}
				else {
					printf("\n\n\t\t\t▲目前計數：%d\n", Calculation);
					num[1] = (Final + 1) - num[0];
					printf("\n電腦輸入的數字：%d", num[1]);
					Calculation = Calculation + num[1];
					if (Calculation >= endpoint) {
						printf("\n\n電腦獲勝!!!\n\n");
						end = true;
					}
					else {
						printf("\n\n\t\t\t▲目前計數：%d\n", Calculation);
					}
				}
			}
		}
	}
}