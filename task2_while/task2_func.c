#include <math.h>

double summ2(float eps) {
	float a0 = 1, a1 = 0, diff = fabs(a0 - a1);
	int i = 1;
	while (diff > eps) {
		a1 = a0 + pow(-1, i)*(i + 1) / (pow(3, i) + pow(2, i));
		diff = fabs(a0 - a1);
		a0 = a1;
		i++;
	}
	return a1;
}