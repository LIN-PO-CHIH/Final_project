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
		printf("�п�J���a�H��( Enter�T�{ ):");
		scanf_s("%d", &people);
		while (Calculation < endpoint) {
			for (int i = 0; i < people; i++) {
				if (end == false) {
					do {
						printf("\n���a%d�п�J�Ʀr�G", i + 1);
						num[i] = getch(num[i]) - 48;
						printf("%d", num[i]);
						if (num[i] < 1 || num[i] > Final)
							printf("\n��J���~�I\n");
					} while (num[i] < 1 || num[i] > Final);
					Calculation = Calculation + num[i];
					if (Calculation >= endpoint) {
						printf("\n\n���a%d���!!!\n\n", i + 1);
						end = true;
					}
					else {
						printf("\n\n\t\t\t���ثe�p�ơG%d\n", Calculation);
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
					printf("\n���a�п�J�Ʀr�G");
					num[0] = getch(num[0]) - 48;
					printf("%d", num[0]);
					if (num[0] < 1 || num[0] > Final)
						printf("\n��J���~�I\n");
				} while (num[0] < 1 || num[0] > Final);
				Calculation = Calculation + num[0];
				if (Calculation >= endpoint) {
					printf("\n\n���a���!!!\n\n");
					end = true;
				}
				else {
					printf("\n\n\t\t\t���ثe�p�ơG%d\n", Calculation);
					num[1] = rand() % Final + 1;
					printf("\n�q����J���Ʀr�G%d", num[1]);
					Calculation = Calculation + num[1];
					if (Calculation >= endpoint) {
						printf("\n\n�q�����!!!\n\n");
						end = true;
					}
					else {
						printf("\n\n\t\t\t���ثe�p�ơG%d\n", Calculation);
					}
				}
			}
		}
	}
	else if (input == 3) {
		num[1] = endpoint % (Final + 1);
		printf("\n�q����J���Ʀr�G%d", num[1]);
		Calculation = Calculation + num[1];
		printf("\n\n\t\t\t���ثe�p�ơG%d\n", Calculation);
		while (Calculation < endpoint) {
			if (end == false) {
				do {
					printf("\n���a�п�J�Ʀr�G");
					num[0] = getch(num[0]) - 48;
					printf("%d", num[0]);
					if (num[0] < 1 || num[0] > Final)
						printf("\n��J���~�I\n");
				} while (num[0] < 1 || num[0] > Final);
				Calculation = Calculation + num[0];
				if (Calculation >= endpoint) {
					printf("\n\n���a���!!!\n\n");
					end = true;
				}
				else {
					printf("\n\n\t\t\t���ثe�p�ơG%d\n", Calculation);
					num[1] = (Final + 1) - num[0];
					printf("\n�q����J���Ʀr�G%d", num[1]);
					Calculation = Calculation + num[1];
					if (Calculation >= endpoint) {
						printf("\n\n�q�����!!!\n\n");
						end = true;
					}
					else {
						printf("\n\n\t\t\t���ثe�p�ơG%d\n", Calculation);
					}
				}
			}
		}
	}
}