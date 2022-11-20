#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, resultado; 
	  int escolha;
	
	  printf("Digite seu peso na Terra:  \n->");
	  scanf("%f",&peso);
	  system("cls");
	  printf("Escolha um dos planetas, para saber seu peso nele: \n-1- 0.37  Mercurio \n-2- 0.88  Venus \n-3- 0.38  Marte \n-4- 2.64  Jupiter \n-5- 1.15  Saturno \n-6- 1.17  Urano\n->");
      scanf("%i",&escolha);
      switch (escolha){
      	case 1:
   		resultado = (peso/10)*0.37;
		printf("Seu peso em Mercurio vai ser  %.1f Kg",resultado);
		break;
		case 2:
		resultado = (peso/10)*0.88;
		printf("Seu peso em Venus vai ser  %.1f Kg",resultado);
		break;
		case 3:
		resultado = (peso/10)*0.38;
		printf("Seu peso em Marte vai ser  %.1f Kg",resultado);
		break;
		case 4:
		resultado = (peso/10)*2.64;
		printf("Seu peso em Júpiter vai ser  %.1f Kg",resultado);
		break;
		case 5:
		resultado = (peso/10)*1.15;
		printf("Seu peso em Saturno vai ser  %.1f Kg",resultado);
		break;
		case 6:
		resultado = (peso/10)*1.17;
		printf("Seu peso em Urano vai ser %.1f Kg",resultado);
		break; 
		default :
        printf ("Valor invalido!\n");     		
      	system("pause");
	  }
}


//EQUIPE: Gabbrielly, Rodrigo, Moises, Matheus B.


	
	

