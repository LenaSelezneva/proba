#include "min.h"
int sum_f(int mas[], int lengthMas) {
	int i = 0;
	int sum = 0;
	int min=min_f(mas, lengthMas);
	while (mas[i] != min) {
		sum = sum + mas[i];
		i++;
	}
	return(sum);
}
