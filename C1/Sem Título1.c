#include <stdio.h>

#include <stdlib.h>

#include <locale.h>




int main() {

	setlocale(LC_ALL, "Portuguese"); //especificando a linguagem portugu�s como padr�o em nosso c�digo-fonte

	//Coment�rio em linha

	/*

		Coment�rio com quebra de linhas

	*/

	


	//gets() m�todo de inser��o de valores reconhecendo o espa�o

	//scanf() m�todo d einser��o de vaores que n�o reconhece o espa�o

	

	//1� Quest�o

	printf("Ol� Mundo!");

	

	//2� Quest�o


	int valorA, valorB;

	

	printf("Insira o valor de A\n->");

	scanf("%d", &valorA);

	system("cls"); //limpar console

	printf("Insira o valor de B\n->");

	scanf("%d", &valorB);

	

	printf("A soma de %d + %d � %d", valorA, valorB, valorA+valorB);

	

	//3� Quest�o


	int valorA, valorB;

	

	printf("Insira o valor de A\n->");

	scanf("%d", &valorA);

	system("cls"); //limpar console

	printf("Insira o valor de B\n->");

	scanf("%d", &valorB);

	

	printf("A m�dia dos valores � %d", (valorA+valorB)/2);

	


	//4� Quest�o

	char nome[10], endereco[10], char telefone[10];

	

	printf("Digite o seu nome:\n->");

	gets(nome);

	printf("Digite o seu endere�o:\n->");

	gets(endereco);

	printf("Digite o seu telefone:\n->");

	gets(telefone);

	

	printf("Nome:%s\t Endere�o:%s\t Telefone:%s", nome, endereco, telefone);

	

}
