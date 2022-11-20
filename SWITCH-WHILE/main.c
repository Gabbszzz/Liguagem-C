#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	
     float nota1, nota2, mediaA, n1, n2, n3, p1, p2, p3, mediaP;
     int escolha;
do{
     printf("Escolha entre as opcoes:\n");
     printf("1. Media aritmetica\n");
     printf("2. Media ponderada\n");
     printf("3. Sair\n\n");
     scanf("%d", &escolha);

  switch(escolha){
        case 1:
        printf("Insira a 1ª nota:\n");
        scanf("%f", &nota1);
        printf("Insira a 2ª nota:\n");
        scanf("%f", &nota2);
        
        mediaA = (nota1 + nota2)/2;
        
        printf("Media aritmetica: %.2f\n", mediaA*1.0);
        break;

        case 2:
        printf("\nInsira a primeira nota:\n");
        scanf("%f", &n1);
        printf("Insira a segunda nota:\n");
        scanf("%f", &n2);
        printf("Insira a terceira nota:\n");
        scanf("%f", &n3);
        printf("Insira o peso da primeira nota:\n");
        scanf("%f", &p1);
        printf("Insira o peso da segunda nota:\n");
        scanf("%f", &p2);
        printf("Insira o peso da terceira nota:\n");
        scanf("%f", &p3);
        mediaP = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);
        printf("Media ponderada: %.2f \n", mediaP);
        break;
       
        case 3:
        printf("Sair\n");
        break;

        default:
        printf("opção inválida\n");
      }
   } while (escolha != 3);
}
