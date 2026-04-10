#include <stdio.h>
#include <math.h>

int main(void){
    float a;
    int b, c;
    printf("Digite um número para ser arredondado: ");
    scanf("%f", &a);
    b = floor(a);   //Função que arredonda para baixo.
    c = ceil(a);    //Função para arredondar para cima.
    printf("Arredondado para cima: %d\n", c);
    printf("Arredondado para baixo: %d\n", b);
    return 0;
}
