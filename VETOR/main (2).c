#include <stdio.h>
#include <stdlib.h>


int main ( ) {
	int vet [10] , i ;
	
	for(i=0;i<10;i++){
		printf("Inserir numero %d \n" ,i+1);
		scanf( " %d", &vet[i]);
	}
	for(i=0;i<10;i++){
	if(vet[i]%2 == 0)
		printf("\t %d ", vet[i]);
	}
}
