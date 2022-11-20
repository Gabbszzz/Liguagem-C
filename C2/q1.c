#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valorReal, valorDolar, cot;
	
	printf("Digite o valor em dolar a ser convertido:\n->");
	scanf("%f", &valorDolar);
	printf("Digite o valor da cotação:\n->");
	scanf("%f", &cot);
	 
	 valorReal = valorDolar*cot;
	
	printf("Valor em real: \n-> %3.f R$", valorReal);
	}
    //Questão 1
    //data:11/05/2022

