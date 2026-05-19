#include <stdio.h>
#include <stdlib.h>

int *repeticao(int *vet, int tam, int *n){
    int c=0;
    for (int i=0; i<tam; i++){  //Percorre todo o vetor.
        int cont=0;
        for (int j=0; j<tam; j++){  //Percore o vetor de novo procurando um possível número igual.
            if (vet[i]==vet[j]){
                cont++; //Caso seja igual, adiciona 1 ao contador.
            }
        }
        int repetido = 0;
        for (int k=0; k<i; k++){
            if (vet[k]==vet[i]){
                repetido = 1;
                break;  //Caso o valor já tenha sido lido, pula para a próxima iteração.
            }
        }
        if (!repetido && cont>1){
            c++;    //Caso o valor não tenha sido lido e for repetido, é adiciona 1 ao valor que será o tamanho do vetor de números que repetiram.
        }
    }
    *n = c; //n vai apontar para c, para usá-lo na main.
    int *repetidos = (int*)malloc(c*sizeof(int));   //Alocação dinâmica para o novo vetor com os repetidos.
    c = 0;
    for (int i=0; i<tam; i++){  //Percorre todo o vetor.
        int cont=0;
        for (int j=0; j<tam; j++){  //Percore o vetor de novo procurando um possível número igual.
            if (vet[i]==vet[j]){
                cont++; //Caso seja igual, adiciona 1 ao contador.
            }
        }
        int repetido = 0;
        for (int k=0; k<i; k++){
            if (vet[k]==vet[i]){
                repetido = 1;
                break;  //Caso o valor já tenha sido lido, pula para a próxima iteração.
            }
        }
        if (!repetido && cont>1){
            repetidos[c] = vet[i];  //Caso o valor não tenha sido lido e for repetido, é adicionado ao vetor.
            c++;
        }
    }
    return repetidos;
}

int main(void){
    int tam, n;
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    int *vet = (int*)malloc(tam*sizeof(int));   //Alocação dinâmica para o vetor.
    int i=0;
    printf("Digite valores entre 0 e 9.\n");
    while (i<tam){  //Lendo valores até que o vetor seja preenchido.
        int n;
        printf("Valor da posição %d: ", i);
        scanf("%d", &n);
        if (n<0 || n>9){
            printf("Valor inválido.\n");    //Caso o valor seja menor que 0 ou maior que 9, não põem n em vet.
        }else{
            vet[i] = n; //Caso o valor seja válido, n é posto em vet.
            i++;
        }
    }
    int *repetidos = repeticao(vet, tam, &n);   //Chama a função que localiza os números repetidos.
    printf("Valores que se repetem: ");
    for (int i=0; i<n; i++){    //Printa os valores que repetiram.
        printf("%d ", repetidos[i]);
    }
    free(repetidos);   //Libera o espaço de memória de repetidos. 
    free(vet);  //Libera o espaço de memória de vet.
    return 0;
}