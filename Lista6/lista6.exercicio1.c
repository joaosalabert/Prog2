#include <stdio.h>
#include <stdlib.h>

float *acima_da_media(int n, float *vet, int *tam){
    float media, sum=0.0;
    for (int i=0; i<n; i++){
        sum += vet[i];  
    }
    media = sum/n;  //Calcula a média.
    int cont=0;
    for (int i=0; i<n; i++){
        if (vet[i]>media){
            cont++; //Se o valor da posição for acima da média, incrementa 1 ao contador.
        }
    }
    *tam = cont;    //tam recebe cont.
    float *vetresposta;
    vetresposta = (float*)malloc(cont * sizeof(float)); //Alocação dinâmica de vetresposta.
    if (vetresposta==NULL){
        return NULL;    //Caso não consiga reservar o espaço na memória, retorna NULL.
    }
    int j=0;
    for (int i=0; i<n; i++){    //Percorre o vetor de novo.
        if (vet[i]>media){  //Se o valor for acima da média...
            vetresposta[j] = vet[i];    //o valor é adicionado ao vetresposta.
            j++;    //Incrementa 1 ao j para a posição de vetresposta.
        }    
    }
    return vetresposta;
}

int main(void){
    int n, tam;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    float *vet;
    vet = (float*)malloc(n * sizeof(float));    //Alocação dinâmica de vet.
    if (vet==NULL){
        return 1;   //Retorna 1 caso não seja possível guardar espaço na memória.
    }
    for (int i=0; i<n; i++){
        printf("Valor %d: ", i);
        scanf("%f", &vet[i]);   //Recebe cada valor de vet por posição.
    }
    float *resposta;
    resposta = acima_da_media(n, vet, &tam);
    printf("Valores acima da média:");
    for (int i=0; i<tam; i++){
        printf(" %.2f", resposta[i]);
    }
    free(vet);  //Libera espaço de vet.
    free(resposta); //Libera espaço de resposta.
    return 0;
}
