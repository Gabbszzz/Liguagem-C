#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float presta,juros,dias;
    
    printf("Ol�...\nInsira o valor da presta��o:\n<");
    scanf("%f",&presta);
    printf("Insira a taxa por dia de juros:\n<");
    scanf("%f",&juros);
    printf("Insira a quantia de dias atrasados\n<");
    scanf("%f",&dias);
    
    printf("\n\nValor da presta��o atrasada: %.2f \ndias de atraso: %.2f\njuros a serem cobrados por dia %.2f \nValor da presta��o acrescido dos juros: %.2f",(presta+((presta/juros)*dias)),dias,juros,(presta/juros)*dias);
    
}

//Gabrielly, Moises, Rodrigo, Matheus B. DESAFIO 1 
