#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um n�mero:\n->");
	scanf("%f", &num);
	 
	printf("Raiz quadrado do n�mero �:\n-> %f", num*num);
}
 //Quest�o 2
 //Data: 11/05/2022
