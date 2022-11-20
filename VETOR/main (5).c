#include <stdlib.h>
#include <stdio.h>

int main(){
    
	int vetor[100], i, j = 0;
	for(i=0;i<100; i++){

 	while(j % 7 == 0 || j % 10 == 7){
  	j=j+1;
	}

 	vetor[i] = j;
 	j=j+1;
	}

	printf("Vetor gerado: ");

	for(i = 0; i < 100; i++){
	printf("%d \t\t ", vetor[i]);
	}
}
