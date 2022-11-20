#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao1, opcao2, opcao3, opcao4;
	
	printf("calculadora de bucho\n");
    printf("PRATO\n (1) - Vegetariano 180 cal\n (2) - Peixe 230 cal\n (3) - Frango 250 cal\n (4) - Carne 350 cal\n");
    printf("\nEscolha um prato:");
    scanf("%d",&opcao1);
    system("cls");
    	switch(opcao1){
		case 1: opcao1=180;
			break;
		case 2: opcao1=230;		
			break;
		case 3: opcao1=250;
			break;
		case 4: opcao1=350;
           }

    printf("\nSOBREMESA\n (1) - Abacaxi 75 cal\n (2)- Sorvete diet 110 cal\n (3) - Mousse diet 170 cal\n (4) - Mousse chocolate 200 cal\n");
    printf("\nEscolha a opção da sobremesa:");
    scanf("%d",&opcao2);
     system("cls");
    switch(opcao2){
    	
		case 1: opcao2=75;
		break;
		case 2: opcao2=110;
		break;
		case 3: opcao2=170;
		break;
		case 4: opcao2=200;
		break;
        
    }
   
    printf("\nBEBIDA\n (1) - Chá 20 cal\n (2) - Suco de laranja 70 cal\n (3) - Suco de melão 100 cal\n (4) - Refrigerante diet 65 cal");
    printf("\nEscolha a opção da bebida: ");
    scanf("%d",&opcao3);
     system("cls");
   switch(opcao3){
		case 1: opcao3=20;
		break;
		case 2: opcao3=70;
		break;
		case 3: opcao3=100;
		break;
		case 4: opcao3=65;
		break;
   }
    printf("Sua refeição teve um total de %d calorias",opcao1+opcao2+opcao3);
}
    


