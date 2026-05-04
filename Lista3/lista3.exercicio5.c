#include <stdio.h>

float max_vet(int n, float *vet){
    float mai=0.0;
    for (int i=0; i<n; i++){
        if(vet[i]>mai){
            mai = vet[i];   //Se o múmero de posição i no vetor for maior que o atual variável mai, ele asssume essa variável.
        } 
    }
    return mai;
}

int main(void){
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    float vet[n];
    for (int i=0; i<n; i++){    //Capta por posição os números do vetor.
        printf("Informe o %dº número do vetor: ", i+1);
        scanf("%f", &vet[i]);
    }
    printf("O maior número do vetor é: %.2f", max_vet(n, vet));
    return 0;
}
