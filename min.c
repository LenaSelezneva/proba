#include<stdio.h>
#include<stdlib.h>
#include"min.h"
int min_f(int mas[], int lengthMas) {
	int min;
	min = mas[0];
	for (int i = 0; i <= lengthMas; i++) {
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	return(min);
}
