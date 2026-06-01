#include <stdio.h>

int *init(){
    int *v, cont = 0;   //Inicializa o vetor e o contador.
    for (int i=1; cont<10; i++){    //Percorre números de 1 em 1 até que o contador seja 10.
        if (i%5==0){    //Caso o número i atual for múltiplo de 5...
            v[cont] = i;    //... ele é adicionado ao vetor...
            cont++; //... e o contador de múltiplos de 5 incrementa em 1.
        }
    }
    return v;   //Retorna o vetor final com os 10 primeiros múltiplos de 5.
}

void imprime(int *v){
    for (int i=0; i<10; i++){   //Para cada valor do vetor, ele é impresso.
        printf("%d ", v[i]);
    }
}

int main(void){
    int *v = init();
    imprime(v);
    return 0;
}
