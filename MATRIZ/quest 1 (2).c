#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   
   int matriz[4][4], contagem = 0;
   int i, j;
   
    //preenchimento da matriz
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d� linha, %d� coluna = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
   
     //contagem > 10
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(matriz[i][j]>10)
                contagem++;
        }
    }
    printf("\n\n Existem na matriz %d n�meros maiores que 10.", contagem);
} 
