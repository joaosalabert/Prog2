#include <stdio.h>

struct pessoa { 
    int codigo; 
    char nome[81];  
}; 
typedef struct pessoa Pessoa; 

Pessoa *busca(int n, Pessoa** vet, int codigo){
    int inicio = 0, fim = n-1;  //Decreta onde a busca vai começar e terminar.
    while (inicio<=fim){    //Loop até que o começo e  fim se cruzem.
        int meio = inicio+((fim-inicio)/2); //Decreta o meio que será usado para dividir o vetor.
        if (vet[meio]->codigo==codigo){ //Caso o código da pessoa no meio já seja igual ao codigo procurado..
            return vet[meio];   //... retorna a estrutura dessa pessoa.
        }else if (vet[meio]->codigo>codigo){  //Se o código da pessoa do meio for menor...
            fim = meio-1;   //... o fim vai ser a posição anterior ao meio.
        }else if (vet[meio]->codigo<codigo){    //Se o código da pessoa do meio for maior...
            inicio = meio+1;    //... o inicio será a posição posterior ao meio.
        }
    }
    return NULL;    //Caso não tenha o código, retorna NULL.
}

int main(void){
    Pessoa p1 = {1, "Bruna"};   //Inicialização para a primeira pessoa.
    Pessoa p2 = {2, "João"};    //Inicialização para a segunda pessoa.
    Pessoa p3 = {3, "Maria"};   //Inicialização para a terceira pessoa.
    Pessoa p4 = {4, "Pedro"};   //Inicialização para a quarta pessoa.
    Pessoa p5 = {5, "Monica"};  //Inicialização para a quinta pessoa.
    Pessoa *vet[] = {&p1, &p2, &p3, &p4, &p5};  //Vetor com as pessoas.
    int tam = 5, cod_pro;
    printf("Código procurado: ");
    scanf("%d", &cod_pro);  //Recebe o código a ser procurado.
    Pessoa *res = busca(tam, vet, cod_pro);
    if (res==NULL){ //Caso a função retorne NULL.
        printf("Código não achado.");
    }else{
        printf("O código %d é de %s.", res->codigo, res->nome);
    }
    return 0;
}
