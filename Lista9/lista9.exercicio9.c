#include <stdio.h>

typedef struct Aluno { 
    char nome[81];
    float media;
}Aluno;

void ordena (Aluno turma[], int tam) { 
    int i, foraOrdem , jaOrdenados = 0; 
    Aluno temp; 
    do { 
        foraOrdem = 0; 
        for (i=0; i<4-1-jaOrdenados; i++) { 
            if (turma[i].media>turma[i+1].media) { 
                temp = turma[i]; 
                turma[i] = turma[i+1]; 
                turma[i+1] = temp; 
                foraOrdem = 1; 
            } 
        } 
        jaOrdenados++; 
    } while (foraOrdem); 
} 

int main(void){
    Aluno a1 = {"Pedro", 8.1};  //Inicializa o primeiro aluno.
    Aluno a2 = {"Ana", 7.0};    //Inicializa o segundo aluno.
    Aluno a3 = {"João", 4.3};   //Inicializa o terceiro aluno.
    Aluno a4 = {"Paula", 10};   //Inicializa o quarto aluno.
    Aluno vet[] = {a1, a2, a3, a4}; //Vetor recebe os alunos.
    printf("Antes da ordenação:\n");
    for (int i=0; i<4; i++){
        printf("Aluno %d: %s, média %.2f.\n", i+1, vet[i].nome, vet[i].media);
    }
    ordena(vet, 4);
    printf("Depois da ordenação:\n");
    for (int i=0; i<4; i++){
        printf("Aluno %d: %s, média %.2f.\n", i+1, vet[i].nome, vet[i].media);
    }
    return 0;
}
