#include <stdio.h>
#include <stdlib.h>

typedef struct Livro { 
    int ano; 
    char titulo[100]; 
    char autor[100]; 
    int nVolume; // Número de exemplares de um dado livro.  
    float preco; 
}Livro; 

typedef struct Biblioteca { 
    Livro **V; // Armazena a informação de n livros !! 
    int nLivros; // Número de livros existentes na biblioteca. 
}Biblioteca;

Livro *fillLivro(){
    Livro *livro;
    livro = malloc(sizeof(Livro));  //Alocação dinâmica para os dados da estrutura.
    printf("Ano: ");
    scanf("%d", &livro->ano);
    printf("Título: ");
    scanf(" %100[^\n]", livro->titulo);
    printf("Autor: ");
    scanf(" %100[^\n]", livro->autor);
    printf("Número de exemplares: ");
    scanf("%d", &livro->nVolume);
    printf("Preço: R$");
    scanf("%f", &livro->preco);
    return livro;
}

Biblioteca *fillBiblioteca(int numLivros){
    Biblioteca *livros;
    livros = malloc(sizeof(Biblioteca));    //Alocação dinâmica para a estrutura Biblioteca.
    livros->nLivros = numLivros;
    livros->V = malloc(numLivros*sizeof(Livro*));   //Alocação dinâmica para os livros dentro de Biblioteca.
    for (int i=0; i<numLivros; i++){
        livros->V[i] = fillLivro();
    }
    return livros;
}

void valorBiblioteca(Biblioteca *b1, int numLivros){
    float sum=0;
    for (int i=0; i<numLivros; i++){
        sum += (b1->V[i]->preco)*(b1->V[i]->nVolume);   
    }
    printf("O valor total da biblioteca é de R$%.2f.\n", sum); 
}

Livro *maiorBiblioteca(Biblioteca * b1, int numLivros){
    Livro *livro;
    int maior = 0;
    for (int i=0; i<numLivros; i++){    //Percorre todos os livros na biblioteca.
        if (b1->V[i]->nVolume>maior){   //Caso o número de exemplares do índice atual seja maior que o atual maior:
            maior = b1->V[i]->nVolume;    //Atualiza o maior número de exemplares.
            livro = b1->V[i];   //Atualiza o livro que tem maior número de exmplares.
        }
    }
    return livro;
}

int main(void){
    int n;
    printf("Quantos livros serão analisados? ");
    scanf("%d", &n);
    Biblioteca *livros = fillBiblioteca(n);
    valorBiblioteca(livros, n);
    Livro *maior = maiorBiblioteca(livros, n);
    printf("O livro de maior número de exemplares foi '%s' de %s do ano de %d com %d exemplares, custando R$%.2f.", maior->titulo, maior->autor, maior->ano, maior->nVolume, maior->preco);
    return 0;
}
