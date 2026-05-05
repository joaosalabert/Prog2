#include <stdio.h>

int main(void){
    int r[5], s[10], x[15], tam_x=0;
    //Lendo valores do vetor r.
    for (int i=0; i<5; i++){
        printf("Digite o %dº número do vetor r: ", i+1);
        scanf("%d", &r[i]);
    }
    //Lendo valores do vetor s.
    for (int i=0; i<10; i++){
        printf("Digite o %dº número do vetor s: ", i+1);
        scanf("%d", &s[i]);
    }
    for (int i=0; i<5; i++){    //Percorre o vetor r.
        int existe = 0;
        for (int j=0; j<tam_x; j++){    //Percorre o vetor x.
            if(r[i]==x[j]){
                existe=1;   //Se r[i] for igual a algum elemento de x, ele marca que ja existe.
            }
        }
        if(existe!=1){
            x[tam_x] = r[i];    //Se não tiver marcado, ainda não existe. Então adiciona na próxima posição de x o r[i].
            tam_x++;    //Aumenta em mais um o tamanho de x.
        }
    }
    for (int i=0; i<10; i++){   //Percorre o vetor s.
        int existe = 0;
        for (int j=0; j<tam_x; j++){
            if (s[i]==x[j]){
                existe = 1; //Se s[i] for igual a algum elemento de x, ele marca que ja existe.
            }
        }
        if (existe!=1){
            x[tam_x] = s[i];    //Se não tiver marcado, ainda não existe. Então adiciona na próxima posição de x o s[i].
            tam_x++;    //Aumenta em mais um o tamanho de x.
        }
    }
    printf("Vetor x:");
    for (int i=0; i<tam_x; i++){
        printf(" %d", x[i]);    //Print em cada elemento de x.
    }
    return 0;
}
