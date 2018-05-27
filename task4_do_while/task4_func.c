#include <math.h>;

int findFirstElement(float eps) {
	float a0 = 1, a1 = 0, diff = fabs(a0 - a1);
	int i = 1;
	do {
		a1 = a0 + pow(-1, i)*(i + 1) / (pow(3, i) + pow(2, i));
		diff = fabs(a0 - a1);
		a0 = a1;
		++i;
	} while (diff > eps);
	i--;
	return i;
}