#include <stdio.h>
#define pi 3.14159265F  //Definindo o valor de pi.

void calc_circulo(float r, float *circunferencia, float *area); //Protótipo da função.

int main(void){
    float r, circunferencia, area;
    printf("Informe o raio do círculo: ");
    scanf("%f", &r);
    calc_circulo(r, &circunferencia, &area);    //Inicializand a função e endereçando as variáveis.
    return 0;
}

void calc_circulo(float r, float *circunferencia, float *area){
    float a, c;
    a = pi*(r*r);
    c = 2*pi*r;
    *circunferencia = c;    //Apontamento do cálculo da circunferência.
    *area = a;  //Apontamento para o cálculo da area.
    printf("A circunferência é : %.2f\n", c);
    printf("A área é: %.2f", a);
}