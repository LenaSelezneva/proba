
int min_f(int mas[], int lengthMas) {
	int min;
	int i;
	min = mas[0];
	for (i = 0; i <= lengthMas; i++) {
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	return(min);
}
