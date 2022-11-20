#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {  

int vetA[10];
int vetB[10];
int vetC[10];
int i;    

	for(i=0; i<10; i++){
 		printf("Digite um valor inteiro: ");
		scanf ("%d",&vetA[i]);
	}

	printf("\n");

	for(i=0; i<10; i++){  
 		printf("Digite um valor inteiro (b): ");
 		scanf ("%d",&vetB[i]);
	}

	printf("\n");  

	for (i=0; i<10; i++){  
 	vetC[i] = vetA[i] - vetB[i];
 	printf("Vetor A - Vetor B é igual: %d\n", vetC[i]);
	}
}
