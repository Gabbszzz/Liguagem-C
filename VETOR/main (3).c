#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
    
	int X[10], i=0, menor, maior;
    
    for(i; i<10; i++){
        printf("escreva um numero\n");
        scanf("%d", &X[i]);
        if(menor>X[i]){
            menor= X[i];    
        }
        if(maior<X[i]){
            maior=X[i];
        }
    }
    printf("O menor e %d\n", menor);
    printf("O maior e %d\n", maior);
}
