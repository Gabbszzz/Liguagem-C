#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int numero, resultado, contador;
		
		printf("Informe um número para ver sua tabuada:\n-> ");
		scanf("%d",&numero);

		while (contador<=10){
			resultado = numero * contador;
			printf (" %d X %d = %d\n ", numero, contador, resultado);
			contador++;
		}
	}


