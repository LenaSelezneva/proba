
int sum_f(int mas[], int min) {
	int i = 0;
	int sum = 0;
	while (mas[i] != min) {
		sum = sum + mas[i];
		i++;
	}
	return(sum);
}
