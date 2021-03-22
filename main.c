#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int tabuada, resultado;
	
	
	printf("Digite um numero para saber sua tabuada: ");
	scanf("%i", &tabuada);
	for ( resultado = 1; resultado <= 10; resultado++ ) {
		printf(" %i x %i = %i\n", resultado, tabuada, resultado * tabuada);
	}
	
}
