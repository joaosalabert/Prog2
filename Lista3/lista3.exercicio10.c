#include <stdio.h>

float media(int n, float *v){
    float sum=0, media;
    for (int i=0; i<n; i++){
        sum += v[i];    //Percorrendo o vetor e somando os valores.
    }
    media = sum/n;  //Calculando a média.
    printf("A média das notas foi: %.2f", media);
}

int main(void){
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    float v[n];
    for (int i=0; i<n; i++){
        printf("Informe o %dº número do vetor: ", i+1);
        scanf("%f", &v[i]);
    }
    media(n, v);
    return 0;
}
