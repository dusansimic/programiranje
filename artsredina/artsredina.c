#include <stdio.h>

int artSredina(int n) {
	int k = 0;
	for (int i = 1; i <= n; i++)
		k+=i;
	return k/n;
}

void main() {
	int n;
	printf("Unesite n: ");
	scanf("%i", &n);
	printf("Aritmeticka sredina je %i.", artSredina(n));
}
