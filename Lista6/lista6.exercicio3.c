#include <stdio.h>
#include <stdlib.h>

int *aprovados(int n, int *mat, float *notas, int *tam){
    int cont=0, *alu_apr;
    for (int i=0; i<n; i++){
        if (notas[i]>=5){
            cont++; //Se a nota for maior ou igual a 5, acrescenta 1 ao contador.
        }
    }
    *tam = cont;    //tam aponta para cont.
    alu_apr = (int*)malloc(cont*sizeof(int));   //Alocação dinâmica de memória para o novo vetor.
    int j=0;
    for (int i=0; i<n; i++){
        if (notas[i]>=5){
            alu_apr[j] = mat[i];    //Se a nota do atual aluno for maior que 5, a matrícula dele é adicionada ao novo vetor.
            j++;
        }
    }
    return alu_apr;
}

int main(void){
    int n=0, *mat, tam=0;
    float *notas;
    printf("Quantidade de alunos: ");
    scanf("%d", &n);
    mat = (int*)malloc(n*sizeof(int));  //Alocação de memória para o vetor das matrículas.
    notas = (float*)malloc(n*sizeof(float));    //Alocação de memória para o vetor das notas.
    for (int i=0; i<n; i++){
        printf("Aluno %d:\n", i+1);
        printf("Matrícula: "); 
        scanf("%d", &mat[i]);
        printf("Nota final: "); 
        scanf("%f", &notas[i]);  
    }
    int *alu_apr =  aprovados(n, mat, notas, &tam);
    for (int i=0; i<tam; i++){
        printf("Matrícula do %dº aluno aprovado: %d.\n", i+1, alu_apr[i]);
    }
    return 0;
}
