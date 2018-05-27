#include <math.h>

double summ(int n) {
	double a = 1;
	for (int i = 1; i <= n; i++) {
		a = a + pow(-1, i)*(i + 1) / (pow(3, i) + pow(2, i));
	}
	return a;
}