#include <stdlib.h>

#include <locale.h>

#include <ctype.h>

#include <stdio.h>




int main() {

	setlocale(LC_ALL, "Portuguese");

		//ATV11

		//1� Quest�o

		

		int valor;

		

		printf("Digite um n�mero:\n->");

		scanf("%d", &valor);

		

		if(valor%3==0)

			printf("M�ltiplo de 3!");

		else

			printf("N�o � m�ltiplo de 3!");

		

		//2� Quest�o

		int valor,valor2, soma;

		

		printf("Digite o 1� valor:");

		scanf("%d", &valor);

		printf("Digite o 2� valor:");

		scanf("%d", &valor2);

		

		soma=valor+valor2;

		

		if(soma>20)

			printf("%d", soma+8);

		else

			printf("%d", soma-5);

		

		//3� Quest�o

		int valor,valor2, soma;

		

		printf("Digite o 1� valor:");

		scanf("%d", &valor);

		printf("Digite o 2� valor:");

		scanf("%d", &valor2);

		

		soma=valor+valor2;

		

		if(soma>10)

			printf("%d", soma);

		

		//4� Quest�o

		int valor;

		

		printf("Digite um valor:\n->");

		scanf("%d", &valor);

		

		if(valor%5==0)

			printf("Valor divis�vel por 5!");

		else

			printf("Valor n�o � divis�vel por 5!");

		

		//5� Quest�o

		int valor;

		

		printf("Digite um valor:\n->");

		scanf("%d", &valor);

		

		if(valor%3==0 && valor%7==0)

			printf("Valor divis�vel por 3 e 7!");

		else

			printf("Valor n�o divis�vel!");

	}
