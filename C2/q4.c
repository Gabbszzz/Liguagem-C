#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float raio, pi=3.14, area;
	
	printf("RAIO = "); 
	scanf("%f", &raio);
 
	area = pi * raio * raio;
 
	printf("AREA = %.2f m2 \n", area);
 
	return 0;
}
//Questão 4
//Data: 11/05/2022

