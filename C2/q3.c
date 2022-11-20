#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float base, alt;
    
    printf("Digite a base:\n->");
    scanf("%f", &base);
    
    printf("Digite a altura:\n->");
    scanf("%f", &alt);
    
    printf("Valor do perimetro do retangulo é:\n-> %2.f", base+alt);
    printf("\nValor da area do retangulo é:\n-> %2.f", base*alt);
    
    return 0;
}

//Questão 3 
//Data: 11/05/2022

