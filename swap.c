#include <stdio.h>
#include <math.h>

int main() {
	int n = 1234;
	int first, last, digits, middle, swapped;

	last = n % 10;

	digits = (int)log10(n);
	first = n / (int)pow(10, digits);

	middle = n % (int)pow(10, digits);
	middle = middle / 10;

	swapped = last * (int)pow(10, digits) + middle * 10 + first;

	printf("%d\n", swapped);
	return 0;
}
