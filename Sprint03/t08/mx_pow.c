#include <stdio.h>
#include <unistd.h>

double mx_pow(double n, unsigned int pow) {
	double p = 1;

	for (unsigned int i = 0; i < pow; i++)
		p *= n;
	printf("%f", p);
	return 0;
}

int main() {
 mx_pow(3, 3);
}
