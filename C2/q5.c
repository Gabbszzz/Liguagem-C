#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
        
    float distancia, tempo, velocidade, litros_usados;
  
    printf("Tempo = "); 
    scanf("%f", &tempo);
    printf("Velocidade  = "); 
    scanf("%f", &velocidade);
 
    distancia = tempo * velocidade;
    litros_usados = distancia / 12;
 
    printf("Velocidade m�dia = %10.2f Km/h \n", velocidade);
    printf("Tempo decorrido  = %10.2f h \n", tempo);
    printf("Dist�ncia percorrida em horas  = %10.2f Km \n", distancia);
    printf("Litros de combust�vel consumidos = %10.2f litros \n", litros_usados);
 
	return 0;
}
//Quest�o 5
//Data: 11/05/2022

