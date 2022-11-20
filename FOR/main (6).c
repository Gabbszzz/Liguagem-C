#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


	int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	float  maior = 0, menor = 500000, cont = 1;
    float valor;
	    
		for(cont>1;cont<=15; cont++){
      	printf("Digite um valor:\n->");
        scanf("%f", &valor);
        
        if (valor > maior){
		maior = valor;
		
        }else if (valor < menor){
		menor = valor;
    }
	}
        printf("Menor valor:%.1f\nMaior valor: %.1f", menor, maior);
	}
  

	
	
