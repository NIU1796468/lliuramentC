#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float F = ((temperatura*9)/5) + 32;
	printf("Temperatura: %d graus\n", temperatura);
	printf("Fahrenheit: %f graus\n", F);
	return 0;
}
