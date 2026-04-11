#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int num, numSorteado;
    int cont = 1;
    numSorteado = rand()%101;
    printf("Digite um número entre 0 e 100: ");
    scanf("%d", &num);
    while(num!=numSorteado){
        if(num<numSorteado){
            printf("Seu número é menor que o sorteado.\n");
        }else if(num>numSorteado){
            printf("Seu número é maior que o sorteado.\n");
        }
        printf("Informe outro número por favor: ");
        scanf("%d", &num);
        cont += 1;
    }
    printf("Parabéns, você acertou o número! Você precisou de %d tentaivas.", cont);
    return 0;
}
