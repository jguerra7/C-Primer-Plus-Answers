#include <stdio.h>

int main(void)
{
	float f1, f2;
	printf("Enter two numbers: ");
	while (scanf("%f%f", &f1, &f2) == 2) {
		printf("%f\n", (f1 - f2) / (f1 * f2));
		printf("Enter two numbers (enter q to quit): ");
	}
	return 0;
}
