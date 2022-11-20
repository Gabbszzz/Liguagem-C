#include <stdio.h>
#include <stdlib.h>
   int main(){
        //1º Questão
        
        int matriz[10][10], linha, coluna;
        
        for(linha=0;linha<10;linha++){
        	for(coluna=0;coluna<10;coluna++){
        		if(linha<coluna)
        			matriz[linha][coluna] = 2*linha + 7*coluna-2;
        		else if(linha==coluna)
        			matriz[linha][coluna] = 3*(linha*linha)-1;
        		else if(linha > coluna)
        			matriz[linha][coluna] = 4*(linha*linha*linha) + 5*(coluna*coluna)+1;
			}
		}
		
		for(linha=0;linha<10;linha++){
        	for(coluna=0;coluna<10;coluna++){
    			printf("%d\t", matriz[linha][coluna]);    
			}
			printf("\n");
		}    
        
        //2º Questão
        	
        int matriz[5][5], linha, coluna, soma=0;
        
        for(linha=0;linha<5;linha++){
        	for(coluna=0;coluna<5;coluna++){
        		printf("Posição[%d][%d]: ", linha,coluna);
        		scanf("%d", &matriz[linha][coluna]);
        		if(linha!=coluna && linha+coluna!=4)
        			soma += matriz[linha][coluna]; 
			}
		}
        printf("Soma dos elementos solicitados: %d", soma);  
      
        //3º Questão
        
        
        int matriz[5][5], linha, coluna, soma=0, soma1=0;
        
        for(linha=0;linha<5;linha++){
        	for(coluna=0;coluna<5;coluna++){
        		printf("Posição[%d][%d]: ", linha,coluna);
        		scanf("%d", &matriz[linha][coluna]);
        		if(linha!=coluna && linha+coluna!=4)
        			soma += matriz[linha][coluna]; 
        		if(linha==coluna || linha+coluna==4)
        			soma1 += matriz[linha][coluna];
			}
		}
		printf("A diferença das somas obtidas e: %d", soma-soma1);
}
