#include <stdio.h>

int main(void){
    int x[10], y[10];   //O vetor original e o que vai ser invertido com 10 posições.
    for (int i=0; i<10; i++){
        printf("Digite o %dº número do vetor: ", i+1);
        scanf("%d", &x[i]); //Lendo os 10 números do vetor x.
    }
    int a=9;
    for (int j=0; j<10; j++){
        y[j] = x[a];    //Captando a posição ao contrário de x[a] para y[j].
        a--;    //Decrementando 1 de a para pegar as posições mais baixas.
    }
    y[10] = '\0';
    printf("Vetor y:");
    for (int i=0; i<10; i++){
        printf(" %d", y[i]);
    }
    return 0;
}
