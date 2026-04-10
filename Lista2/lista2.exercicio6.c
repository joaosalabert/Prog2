#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, numSorteado;
    int cont = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    numSorteado = rand()%100;   //Sorteando um número de 0 a 100.
    printf("O número sorteado foi: %d\n", numSorteado);
    while(num!=numSorteado){    //Loop para receber novo número enquanto o usuário não acertar.
        printf("Número errado, informe um novo: ");
        scanf("%d", &num);
        numSorteado = rand()%100;
        printf("O número sorteado foi: %d\n", numSorteado);
        cont += 1; //Incrementa uma tentativa ao contador a cada loop.
    }
    printf("Parabéns, você acertou o número sorteado. Você precisou de %d tentaivas.", cont);
    return 0;
}
