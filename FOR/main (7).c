#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int multiplo, cont=0;
		
		for(cont>=1;cont<=500;cont++){
		if(cont%3==0 && cont%2==1){
		multiplo+=cont;
		}
		}
		printf("A soma dos números ímpares que são múltiplos de 3:\n-> %d", multiplo);	
		}
  

	
	
