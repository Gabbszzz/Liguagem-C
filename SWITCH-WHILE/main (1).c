#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
    float salariob, nsalario, ferias, meses, decimot; 
int opcao;

 while(opcao != 4){
printf("---M�DIA DE NOTAS---\n");
    printf("\n(1)Novo sal�rio.\n(2)F�rias.\n(3)D�cimo terceiro.\n(4)Sair do programa.\n ->");
    scanf("%d", &opcao);
   
    switch(opcao){
    case 1:
        printf("---Novo Sal�rio---");
        printf("\nValor do sal�rio: \n->");
        scanf("%f", &salariob);
       
        if(salariob<=350){
        printf("O novo sal�rio ser� de: R$%.2f", salariob+(salariob*0.15));

}else if(salariob<=600){
        printf("O novo sal�rio ser� de: R$%.2f", salariob+(salariob*0.10));

}else if(salariob>600){
        printf("O novo sal�rio ser� de: R$%.2f", salariob+(salariob*0.05));             
}
   break;
case 2:
printf("---F�rias---");
        printf("\nValor do sal�rio: \n->");
        scanf("%f", &salariob);
       
  ferias = salariob + (salariob/3);
  
  printf("\n O valor de suas f�rias s�o: R$%.2f", ferias);

   break;
case 3:
printf("---D�cimo Terceiro---");
        printf("\nQual o valor do sal�rio: \n->");
        scanf("%f", &salariob);
        printf("N�mero de meses (digite at� 12): \n->");
        scanf("%f", &meses);
       
  decimot = (salariob*meses)/12;
  
  printf("\n O valor do seu d�cimo terceiro: R$%.2f", decimot);

   break;
case 4:
printf("\nSaindo \n...");
break;
default:
printf("\n---op��o �nvalida!---");
break;
}
}
}
