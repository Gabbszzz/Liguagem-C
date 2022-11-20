#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont=100, aux=0;
		
		while(cont<=200){
		if (cont%3==0){
		
		aux++;	
	}
		cont++;
	}
		printf("Os números ímpares entre 100 e 200 são:\n-> %d", aux);
	}


