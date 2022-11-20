#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int tipo;
    float KM,consumo;   
    
    printf("Informe o tipo de carro:\n");
    printf("(1)Tipo A - 12Km/L\n(2)Tipo B - 9KM/L\n(3)Tipo C - 8KM/L\n");
    scanf ("%d", &tipo); 
    
    switch(tipo){
        case 1:
            printf("---Tipo A - 12Km/L---\n");
            printf("Informe percurso em KM:\n");
            scanf("%f",&KM);
            printf("A quantidade de combustivel consumida é: %.2fL\n ", consumo=KM/12);
        break;
        case 2:
            printf("---Tipo B - 9Km/L---\n");
            printf("Informe percurso em KM:\n");
            scanf("%f",&KM);
            printf("A quantidade de combustivel consumida é: %.2fL\n ", consumo=KM/9);
        break;
        case 3:
            printf("---Tipo C - 8Km/L---\n");
            printf("Informe percurso em KM:\n");
            scanf("%f",&KM);
            printf("A quantidade de combustivel consumida é: %.2fL\n ", consumo=KM/8);
        break;
    }
}
