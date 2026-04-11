#include <stdio.h>
#include <math.h>   //Importa a biblioteca que tem a função de potência.

int main(void){
    int a, b, pot;
    printf("Informe dois números: ");
    scanf("%d %d", &a, &b);
    pot = pow(a, b);    //Função que indica a potência de a por b.
    printf("%d elevado à %d é %d", a, b, pot);
    return 0;
}
