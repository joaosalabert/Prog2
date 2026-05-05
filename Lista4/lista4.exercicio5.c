#include <stdio.h>

void calcula_corrida(float dist, float *b1, float *b2){
    float p1, p2;   //Preço final da corrida...
    p1 = 4.95+(dist * *b1); //..na bandeira 1,
    p2 = 4.95+(dist * *b2); //...na bandeira 2.
    printf("Preço na bandeira 1 é de R$%.2f.\n", p1);
    printf("Preço na bandeira 2 é de R$%.2f.\n", p2);
}

int main(void){
    float dist, pb1 = 2.5, pb2 = 3.0;   //Distâcia e valor por km.
    printf("Qual a distância da corrida? ");
    scanf("%f", &dist);
    calcula_corrida(dist, &pb1, &pb2);
    return 0;
}
