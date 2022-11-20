#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "");
	int opcao;
	char test;
	char ma = toupper(test);
	char mi = tolower(test);
	printf("Digite uma letra:\n->");
	scanf("%c", &test);
	
	printf("Deseja torna-la maiúscula: (1) SIM (2) NÃO\n->");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("--> %c", toupper(test));
		break;
		case 2:
			printf("--> %c", tolower(test));
		break;
	}
	
	
}
