#include <stdio.h>

int artSredina(int n) {
	int k = 0;
	for (int i = 1; i <= n; i++) {
		k+=i;
	}
	return k/n;
}

int main() {

	int n;
	printf("Unesite n: ");
	scanf("%i", &n);

	int sredina = artSredina(n);
	printf("Aritmeticka sredina je %i.", sredina);

	return 0;
}
