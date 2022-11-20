#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int numero, resultado, cont=1;
		
		printf("Informe um número para ver sua tabuada:\n-> ");
		scanf("%d",&numero);

		for(cont>=1;cont<=10;cont++){
			resultado = numero * cont;
			printf(" %d X %d = %d\n ", numero, cont, resultado);
			
	}
    }
