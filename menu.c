#include <stdio.h>
#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"
#define LENGT_OF_MASSIVE 100
int main() {
	int sum;
	int diff;
	int command;
	int mas[LENGT_OF_MASSIVE];
	int i = 0;
	int max;
	int min;
	int lengthMas = -1;
	char symbol;
	scanf("%d%c", &command, &symbol);
	do {
		scanf("%d%c", &mas[i], &symbol);
		i++;
		lengthMas++;
	}
	while(symbol != '\n');
	max = max_f(mas, lengthMas);
	min = min_f(mas, lengthMas);
	diff = diff_f(mas, lengthMas);
	sum = sum_f(mas, lengthMas);
	switch (command) {
		case 0:
			printf("%d\n", max);
			break;
		case 1:
			printf("%d\n", min);
			break;
		case 2:
			printf("%d\n", diff);
			break;
		case 3:
			printf("%d\n", sum);
			break;
		default:
			printf("Данные некорректны\n");
	}
	return 0;
}
