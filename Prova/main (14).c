#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
   int main(){
   	setlocale(LC_ALL, "");
      
	  int op=0, soma=0, cont;
	  int alunos;
	  int notas[4][4];
	  
	  printf("-----Escola Jesu�tas-----\n");
      printf("Carregando...\n\n");
      system("pause");
      system("cls");
      
      do{
      	system("cls");
      	printf("-----Escola Jesu�tas-----\n");
      	printf("[1] - Inserir Notas\n");
      	printf("[2] - C�lcular M�dia\n");
      	printf("[3] - Sair\n");
      	scanf("%d", &op);
      	
      	switch(op){
      		
      			
      		case 1:
      			printf("Insira a quantida de Alunos:\n->");
      			scanf("%d", &alunos);
      			for(int i=0;i<alunos;i++){
	      			for(int j=0;j<4;j++){
	      					printf("Insira a nota do aluno %d: ",i+1);
	      					scanf("%d", &notas[i][j]);
		      				if(notas[i][j]<4){
		      					notas[i][j]=0;
						}
					 }  	
					  }
				
      			break;
      		case 2:
      			for(int i=0;i<alunos;i++){
	      			for(int j=0;j<4;j++){
	      				soma+=notas[i][j];	
					  }
					  printf("A m�dia do aluno %d �: %d\n",i+1, soma/4);
					  soma=0;
				}
			
				system("pause");
      			break;
      		
			    default: 
				printf("~~Escola Jesu�tas!~~\n\n");
				system("pause");
      		}		
		  
      	}while(op!=3);	
	  }


