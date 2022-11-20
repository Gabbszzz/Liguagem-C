#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


	int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int  maior = 0, menor = 500000, cont = 1;
    float alt;
	    
		for(cont=1;cont<=15;cont++){
      	printf("Digite sua altura:\n->");
        scanf("%f", &alt);
        
        if (alt > maior){
		maior = alt;
		
        }else if (alt < menor){
		menor = alt;
    }
	}
	printf("Menor altura do grupo:%d\nMaior altura do grupo: %d", menor, maior);
    }

	
	
