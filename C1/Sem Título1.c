#include <stdio.h>

#include <stdlib.h>

#include <locale.h>




int main() {

	setlocale(LC_ALL, "Portuguese"); //especificando a linguagem português como padrão em nosso código-fonte

	//Comentário em linha

	/*

		Comentário com quebra de linhas

	*/

	


	//gets() método de inserção de valores reconhecendo o espaço

	//scanf() método d einserção de vaores que não reconhece o espaço

	

	//1º Questão

	printf("Olá Mundo!");

	

	//2º Questão


	int valorA, valorB;

	

	printf("Insira o valor de A\n->");

	scanf("%d", &valorA);

	system("cls"); //limpar console

	printf("Insira o valor de B\n->");

	scanf("%d", &valorB);

	

	printf("A soma de %d + %d é %d", valorA, valorB, valorA+valorB);

	

	//3º Questão


	int valorA, valorB;

	

	printf("Insira o valor de A\n->");

	scanf("%d", &valorA);

	system("cls"); //limpar console

	printf("Insira o valor de B\n->");

	scanf("%d", &valorB);

	

	printf("A média dos valores é %d", (valorA+valorB)/2);

	


	//4º Questão

	char nome[10], endereco[10], char telefone[10];

	

	printf("Digite o seu nome:\n->");

	gets(nome);

	printf("Digite o seu endereço:\n->");

	gets(endereco);

	printf("Digite o seu telefone:\n->");

	gets(telefone);

	

	printf("Nome:%s\t Endereço:%s\t Telefone:%s", nome, endereco, telefone);

	

}
