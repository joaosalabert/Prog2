#include <stdio.h>
#include <string.h>

struct aluno { 
    int mat; /* Matricula do aluno */  
    char nome[81]; /* Nome do aluno */  
};
typedef struct aluno Aluno; 

struct prova { 
    Aluno a; /* Aluno que fez a prova */  
    float q1, q2, q3, q4; /* Nota em cada questao */  
}; 
typedef struct prova Prova; 

int compara(Prova *p1, Prova *p2){
    float n1 = (p1->q1)+(p1->q2)+(p1->q3)+(p1->q4); //Calcula a nota do aluno 1.
    float n2 = (p2->q1)+(p2->q2)+(p2->q3)+(p2->q4); //Calcula a nota do aluno 2.
    char *nome1 = p1->a.nome;   //Recebe o nome do aluno 1.
    char *nome2 = p2->a.nome;   //Recebe o nome do aluno 2.
    if (n1<n2){ //Caso a nota 1 seja menor que a nota 2...
        return 1;   //... retorna verdadeiro e troca.
    }else if (n1>n2){   //Caso a nota 1 seja maior que a nota 2...
        return 0;   //... retorna falso e não troca.
    }else if(n1==n2){   //Se as notas forem iguais.
        int res = strcmp(nome1, nome2); //Compara as strings.
        if (res<0){ //Caso o nome1 venha antes do nome2...
            return 0;   //... retorna falso e não troca.
        }else{  //Caso o nome2 venha antes do nome 1...
            return 1;   //... retorna verdadeiro e troca.
        }
    }
}

void troca(Prova **p1, Prova **p2){
    Prova *temp = *p1;  //Variável temporária que recebe p1.
    *p1 = *p2;  //p1 recebe p2;
    *p2 = temp; //p2 recebe temp, que ja havia recebido p1.
}

void ordena(int n, Prova** v) { 
    int fim,i; 
    for(fim=n-1; fim>0; fim--){
        for(i=0; i<fim; i++){
            if(compara(v[i], v[i+1])){
                troca(&v[i], &v[i+1]); 
            }
        }
    }
} 

int main(void){
    Prova p1 = {{1, "Maria"}, 1.0, 2.0, 2.0, 1.0};  //Inicializando a pessoa 1.
    Prova p2 = {{2, "Ana"}, 1.0, 2.0, 2.0, 1.0};    //Inicializando a pessoa 2.
    Prova p3 = {{3, "Sandra"}, 2.0, 2.0, 2.0, 1.0}; //Inicializando a pessoa 3.
    Prova *vet[] = {&p1, &p2, &p3}; //Vetor do tipo Pessoa com as alunas.
    printf("Vetor não ordenado:\n");
    for (int i=0; i<3; i++) {
        float nota_total = vet[i]->q1 + vet[i]->q2 + vet[i]->q3 + vet[i]->q4;
        printf("%dº lugar: %s - Nota: %.1f\n", i + 1, vet[i]->a.nome, nota_total);
    }
    ordena(3, vet);
    printf("Vetor ordenado:\n"); 
    for (int i=0; i<3; i++) {
        float nota_total = vet[i]->q1 + vet[i]->q2 + vet[i]->q3 + vet[i]->q4;
        printf("%dº lugar: %s - Nota: %.1f\n", i + 1, vet[i]->a.nome, nota_total);
    }
    return 0;
}
