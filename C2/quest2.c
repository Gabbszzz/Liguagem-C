#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um número:\n->");
	scanf("%f", &num);
	 
	printf("Raiz quadrado do número é:\n-> %f", num*num);
}
 //Questão 2
 //Data: 11/05/2022
