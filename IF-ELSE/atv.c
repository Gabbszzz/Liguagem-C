#include <stdlib.h>

#include <locale.h>

#include <ctype.h>

#include <stdio.h>




int main() {

	setlocale(LC_ALL, "Portuguese");

		//ATV11

		//1º Questão

		

		int valor;

		

		printf("Digite um número:\n->");

		scanf("%d", &valor);

		

		if(valor%3==0)

			printf("Múltiplo de 3!");

		else

			printf("Não é múltiplo de 3!");

		

		//2º Questão

		int valor,valor2, soma;

		

		printf("Digite o 1º valor:");

		scanf("%d", &valor);

		printf("Digite o 2º valor:");

		scanf("%d", &valor2);

		

		soma=valor+valor2;

		

		if(soma>20)

			printf("%d", soma+8);

		else

			printf("%d", soma-5);

		

		//3º Questão

		int valor,valor2, soma;

		

		printf("Digite o 1º valor:");

		scanf("%d", &valor);

		printf("Digite o 2º valor:");

		scanf("%d", &valor2);

		

		soma=valor+valor2;

		

		if(soma>10)

			printf("%d", soma);

		

		//4º Questão

		int valor;

		

		printf("Digite um valor:\n->");

		scanf("%d", &valor);

		

		if(valor%5==0)

			printf("Valor divisível por 5!");

		else

			printf("Valor não é divisível por 5!");

		

		//5º Questão

		int valor;

		

		printf("Digite um valor:\n->");

		scanf("%d", &valor);

		

		if(valor%3==0 && valor%7==0)

			printf("Valor divisível por 3 e 7!");

		else

			printf("Valor não divisível!");

	}
