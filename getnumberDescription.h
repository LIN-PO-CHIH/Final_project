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

	printf("\t\t\t\t\t\t�m%d\n\n", endpoint);
	printf("\t\t\t\t�C���W�h�G\n");
	printf("\t\t\t\t\t�����a�i��J1��%d���Ʀr\n", Final);
	printf("\t\t\t\t\t�����Ʀr�@���|�[�֭p\n");
	printf("\t\t\t\t\t�������ۦܩζW�L�Ʀr%d���@��Y���\n", endpoint);

	printf("\t\t\t\t�C���ﶵ�G\n");
	printf("\t\t\t\t\t1.���a V S ���a\n\n");
	printf("\t\t\t\t\t2.���a V S �q�� ( ²�� )\n\n");
	printf("\t\t\t\t\t3.���a V S �q�� ( �x�� )\n\n\n");

	printf("\t\t\t\t��J�ﶵ : ");

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