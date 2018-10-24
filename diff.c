#include"min.h"
#include"max.h"

int diff_f(int mas[], int lengthMas) {
	int max=max_f(mas,lengthMas);
	int min=min_f(mas,lengthMas);
	int diff;
	diff = max - min;
	return(diff);

}
