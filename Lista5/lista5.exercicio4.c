#include <stdio.h>

int main(void){
    char pal[20];   //Inicializa a palavra.
    printf("Frase: ");
    scanf("%s", &pal);  //Recebe a palavra.
    printf("Primeira letra: %c\n", pal[0]); //Imprime a a letra no primeiro índice.
    int cont=0, i;
    for (i=0; pal[i]!='\0'; i++){
        cont+=1;    //Percorre a palavra e conta quantas letras tem.
    }
    printf("Última letra: %c\n", pal[i-1]); //Tira o '\0' e põe a letra da penúltima posição.
    printf("Tamanho da palavra: %d\n", i);  //Tamanho com a variável i.
    return 0;
}
