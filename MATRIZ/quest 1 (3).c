#include <stdio.h>

#include <locale.h>

#include <stdlib.h>

int main(){

setlocale (LC_ALL, "portuguese");

int matriz[3][3], i, j, soma = 0;

for (i = 0; i < 3; i++){

for (j = 0; j < 3; j++){

printf ("Digite o numero da matriz [%d][%d]", i, j);

scanf ("%d", &matriz[i][j]);

}

system ("cls");

}

soma = matriz[0][0] + matriz[1][1] + matriz[2][2];

printf ("A soma da diagonal principa da matriz é: %d", soma);

return 0;

}
