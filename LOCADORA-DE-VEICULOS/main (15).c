#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opcao, diaria;

int menu(){
    printf("---Locadora da Bibiu---\n");
    printf("\n���\t�");
    printf("i");
    printf("�");
    printf("i");
    printf("�\t���\n\n");
    printf("[1]Alugar Carros\n[2]Alugar Motos\n");
    printf("->");
    scanf("%d", &opcao);
}
int menuano(){
	printf("---Locadora da Bibiu---");
            printf("\nEscolha o ano do veículo\n");
            printf("[1]2022\n[2]2021\n->");
            scanf("%d", &opcao);
}
int menucarro2021(){
	printf("---CARROS 2022---");
                    printf("\n[1]Caoa Chery\t[2]Hyundai\t[3]Mercedes-Benz\n->");
                    scanf("%d", &opcao);
}
int carros1(){
	printf("\nValor Diária: R$110,00");
                            printf("\nQuantos dias de aluguel: ");
                            scanf("%d", &diaria);
                           
                            printf("Valor total:R$ %.2f", 1.0*diaria*110);
                            printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*110 - (diaria*110*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*110 + (diaria*110*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*110 + (diaria*110*0.03));
                }
}
int carros2(){
	printf("\nValor Diária: R$90,00");
                            printf("\nQuantos dias de aluguel: ");
                            scanf("%d", &diaria);
                           
                            printf("Valor total:R$ %.2f", 1.0*diaria*90);
                            printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*90 - (diaria*90*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*90 + (diaria*90*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*90 + (diaria*90*0.03));
                }
}
int carros3(){
	printf("Valor Diária: R$150,00");
                            printf("Quantos dias de aluguel: ");
                            scanf("%d", &diaria);
                           
                            printf("\nValor total:R$ %.2f", 1.0*diaria*150);
                            printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*150 - (diaria*150*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*150 + (diaria*150*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*150 + (diaria*150*0.03));
                }
}
int menucarro2022(){
	printf("---CARROS 2021---");
                    printf("\n[1]Fiat\t[2]Renault\t[3]Alfa Romeo\n->");
                    scanf("%d", &opcao);
}
int carro1(){
	printf("\nValor Diária: R$80,00");
                            printf("\nQuantos dias de aluguel: ");
                            scanf("%d", &diaria);
                           
                            printf("\nValor total:R$ %.2f", 1.0*diaria*80);
                            printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                    if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*80 - (diaria*80*0.10));
}if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*80 + (diaria*80*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*80 + (diaria*80*0.03));
                }
}
int carro2(){
	 printf("\nValor Diária: R$85,00");
                            printf("\nQuantos dias de aluguel: ");
                            scanf("%d", &diaria);
                           
                            printf("Valor total:R$ %.2f", 1.0*diaria*85);
                            printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                    if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*85 - (diaria*85*0.10));
}if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*85 + (diaria*85*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*85 + (diaria*85*0.03));
                }
}
int carro3(){
	 printf("\nValor Diária: R$100,00");
                            printf("\nQuantos dias de aluguel: ");
                            scanf("%d", &diaria);
                           
                            printf("Valor total:R$ %.2f", 1.0*diaria*100);
                            printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                    if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*100 - (diaria*100*0.10));
}if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*100 + (diaria*100*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*100 + (diaria*100*0.03));
                }
}

int menumotoano(){
	printf("---LOCADORA DE MOTOS---");
            printf("\nEscolha o ano do veÃƒÂ­culo\n");
            printf("[1]2022\n[2]2021\n->");
            scanf("%d", &opcao);
}
int menumoto2022(){
	printf("---MOTOS 2022---");
                    printf("\n[1]Yamaha Lander 250 ABS\t[2]Yamaha Fluo ABS\t[3]Triumph Tiger 1200\n->");
                    scanf("%d", &opcao);
}
int motos1(){
	printf("\nValor Diária: R$50,00");
                    printf("\nQuantos dias de aluguel: ");
                    scanf("%d", &diaria);
                           
                    printf("\nValor total:R$ %.2f", 1.0*diaria*50);
                    printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*50 - (diaria*50*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*50 + (diaria*50*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*50 + (diaria*50*0.03));
                }
}
int motos2(){
	printf("\nValor Diária: R$85,00");
                        printf("\nQuantos dias de aluguel: ");
                        scanf("%d", &diaria);
                           
                    printf("\nValor total:R$ %.2f", 1.0*diaria*85);
                    printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                 if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*85 - (diaria*85*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*85 + (diaria*85*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*85 + (diaria*85*0.03));
                }
}
int motos3(){
	 printf("\nValor Diária: R$100,00");
                        printf("\nQuantos dias de aluguel: ");
                        scanf("%d", &diaria);
                           
                    printf("\nValor total:R$ %.2f", 1.0*diaria*100);
                    printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*100 - (diaria*100*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*100 + (diaria*100*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*100 + (diaria*100*0.03));
                }
}
int menumoto2021(){
	printf("---MOTOS 2021---");
                    printf("\n[1]Yamaha Aquaman\t[2]Yamaha Thor[3]\tTriumph Batman\n->");
                    scanf("%d", &opcao);
}
int moto1(){
	printf("\nValor Diária: R$40,00");
                    printf("\nQuantos dias de aluguel:\n->");
                    scanf("%d", &diaria);
                           
                    printf("\nValor total:R$ %.2f", 1.0*diaria*40);
                    printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*40 - (diaria*40*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*40 + (diaria*40*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*40 + (diaria*40*0.03));
                }
}
int moto2(){
	printf("\nValor Diária: R$50,00");
                    printf("\nQuantos dias de aluguel:\n->");
                    scanf("%d", &diaria);
                           
                    printf("Valor total:R$ %.2f", 1.0*diaria*50);
                    printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*50 - (diaria*50*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*50 + (diaria*50*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*50 + (diaria*50*0.03));
                }
}
int moto3(){

	printf("\nValor Diária: R$80,00");
                    printf("\nQuantos dias de aluguel:\n->");
                    scanf("%d", &diaria);
                           
                    printf("\nValor total:R$ %.2f", 1.0*diaria*80);
                    printf("\n[1]À vista - 10 porcento de desconto\t[2]À prazo 2x - 2 porcento de Juros\t[3]À prazo 3x - 3 porcento de Juros\n");
                    scanf("%d", &opcao);
                   
                if(opcao==1){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*80 - (diaria*80*0.10));
                }if(opcao==2){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*80 + (diaria*80*0.02));
                }if(opcao==3){
                    printf("\nO preço será: R$%.2f", 1.0*diaria*80 + (diaria*80*0.03));
                }
}

int main(){
    setlocale(LC_ALL, "Portuguese");    

    menu();
    switch(opcao){
            case 1:
                menuano();
                switch(opcao){
            		case 1:
                	    menucarro2021();
               		    switch(opcao){
            				case 1:
                   			 	carros1();
                			break;
            				case 2:
                  		  		carros2();
                		    break;
            				case 3:
                    			carros3();
                   			break;
                        }
                            break;
            		case 2:
                  		menucarro2022();
                       	switch(opcao){
           					case 1:
                    			carro1();
                            break;
            				case 2:
                    			carro2();
                            break;
           					case 3:
            		      		carro3();
                            break;
        				}	
                            break;
        		}
                            break;
            case 2:
                menumotoano();   
                        switch(opcao){
            				case 1:
                 			   	menumoto2022();
                    			switch(opcao){
            						case 1:
                    					motos1();
                            			break;
            						case 2:
                    					motos2();
                           			break;
           							case 3:
                   						motos3();
                           			break;
								}
							
							break;
            				case 2:
                				menumoto2021();               
								switch(opcao){
            						case 1:
                   					moto1();
                        		    break;
            						case 2:
                 					   moto2();
                      				  break;
          							case 3:
                   						moto3();
                         			break;
									 }
}
break;
}    
}
