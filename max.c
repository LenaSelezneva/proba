
int max_f(int mas[], int lengthMas) {
	int max;
	max = mas[0];
	int i;
	for (i = 0; i <= lengthMas; i++) {
		if (mas[i] > max) {
			max = mas[i];
		}	
	}
	return(max);
}

