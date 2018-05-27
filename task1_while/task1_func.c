#include <math.h>

double summ(int n) {
	double a = 1;
	int i = 1;
	while (i <= n) {
		a = a + pow(-1, i)*(i + 1) / (pow(3, i) + pow(2, i));
		i++;
	}
	return a;
}