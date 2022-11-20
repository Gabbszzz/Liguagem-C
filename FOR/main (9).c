#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont=100;
		
		printf("Os números ímpares entre 100 e 200 são:\n->");
		
		for(cont>=100;cont<=200;cont++){
		if (cont%2==1){
		printf("%d \n",cont);	
	}
	}
    }
	
