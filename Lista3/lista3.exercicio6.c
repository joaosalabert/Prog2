#include <stdio.h>

int maiores(int n, int *vet, int x){
    int cont=0;
    for (int i=0; i<n; i++){
        if(vet[i]>x){
            cont+=1;    //Adiciona 1 ao contador que contabiliza quantos números maiores que x têm no vetor.
        }
    }
    return cont;
}

int main(void){
    int n, x;
    printf("Informe o tamanho do vetor: "); 
    scanf("%d", &n);
    int vet[n];
    printf("Informe o número para encontrar os maiores: ");
    scanf("%d", &x);
    for (int i=0; i<n; i++){
        printf("Informe o %dº número do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Foram %d números maiores que %d no vetor.", maiores(n, vet, x), x);
    return 0;
}
