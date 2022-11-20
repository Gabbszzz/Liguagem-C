#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
    float salariob, nsalario, ferias, meses, decimot; 
int opcao;

 while(opcao != 4){
printf("---MÉDIA DE NOTAS---\n");
    printf("\n(1)Novo salário.\n(2)Férias.\n(3)Décimo terceiro.\n(4)Sair do programa.\n ->");
    scanf("%d", &opcao);
   
    switch(opcao){
    case 1:
        printf("---Novo Salário---");
        printf("\nValor do salário: \n->");
        scanf("%f", &salariob);
       
        if(salariob<=350){
        printf("O novo salário será de: R$%.2f", salariob+(salariob*0.15));

}else if(salariob<=600){
        printf("O novo salário será de: R$%.2f", salariob+(salariob*0.10));

}else if(salariob>600){
        printf("O novo salário será de: R$%.2f", salariob+(salariob*0.05));             
}
   break;
case 2:
printf("---Férias---");
        printf("\nValor do salário: \n->");
        scanf("%f", &salariob);
       
  ferias = salariob + (salariob/3);
  
  printf("\n O valor de suas férias são: R$%.2f", ferias);

   break;
case 3:
printf("---Décimo Terceiro---");
        printf("\nQual o valor do salário: \n->");
        scanf("%f", &salariob);
        printf("Número de meses (digite até 12): \n->");
        scanf("%f", &meses);
       
  decimot = (salariob*meses)/12;
  
  printf("\n O valor do seu décimo terceiro: R$%.2f", decimot);

   break;
case 4:
printf("\nSaindo \n...");
break;
default:
printf("\n---opção ínvalida!---");
break;
}
}
}
