#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, multiplo, cont=0;
		
		while(cont<=500){
		if (cont%3==0 && cont%2==1){
		multiplo+=cont;
		}
		cont++;
		}
		printf("A soma dos n�meros �mpares que s�o m�ltiplos de 3:\n-> %d", multiplo);		
	}
	


