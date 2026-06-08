#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno { 
    int matricula; 
    float *vNotas; // Armazena as 5 notas de um aluno ao longo de um ano.  
    char nome[100]; 
} Aluno; 

typedef struct Matéria {  
    Aluno *V; // Armazena a informação de n alunos !! 
    float media[5]; // Armazena as 5 médias do ano. 
    int nAlunos; // Número de alunos matriculados no curso.
} Materia;

Aluno *fillAluno(){
    Aluno *aluno;
    aluno = malloc(sizeof(Aluno));  //Alocação dinâmica para a estrutura.
    printf("Matrícula: ");
    scanf("%d", &aluno->matricula);
    aluno->vNotas = malloc(5*sizeof(float));    //Alocação dinâmica de memória para o ponteiro das notas.
    for (int i=0; i<5; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &aluno->vNotas[i]);
    }
    getchar();  //Captura o última enter do loop e evita pular a leitura do nome.
    printf("Nome: ");
    fgets(aluno->nome, 100, stdin);
    return aluno;
}

Materia *fillMateria(int numAlunos){
    Materia *mat;
    mat = malloc(sizeof(Materia));  //Alocação dinâmica para a estrutura Matéria.
    mat->nAlunos = numAlunos;
    mat->V = malloc(numAlunos*sizeof(Aluno));   //Alocação dinâmica para o vetor das informações dos alunos.
    for (int i=0; i<numAlunos; i++){
        mat->V[i] = *fillAluno();
    }
    return mat;
}

void mediaMateria(Materia *m1){
    for (int i=0; i<5; i++){    //Percorre 5 vezes, uma para cada média a ser calculada.
        float sum = 0;  //Inicializa a variável que receberá a soma da média atual.
        for (int j=0; j<m1->nAlunos; j++){  //Percorre as notas do índice i de todos os alunos.
            sum += m1->V[j].vNotas[i];
        }
        m1->media[i] = sum/m1->nAlunos;
    }
}

void mostraMateria(Materia *m1){
    for (int i=0; i<m1->nAlunos; i++){
        printf("----------ALUNO---------- %d\n", i+1);
        printf("Matrícula: %d.\n", m1->V[i].matricula);
        printf("Notas: %.2f, %.2f, %.2f, %.2f, %.2f.\n", m1->V[i].vNotas[0], m1->V[i].vNotas[1], m1->V[i].vNotas[2], m1->V[i].vNotas[3], m1->V[i].vNotas[4]);
        printf("Nome: %s", m1->V[i].nome);
    }
}

int main(void){
    int n;
    printf("Quantos alunos serão analisados? ");
    scanf("%d", &n); 
    Materia *mat = fillMateria(n);
    mediaMateria(mat);
    mostraMateria(mat);
    return 0;
}
