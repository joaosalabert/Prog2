#include <stdio.h>
#include <stdlib.h> //Biblioteca para sortear as letras.
#include <time.h>   //Biblioteca para inicializar o sorteio.

int main(void){
    srand(time(NULL));  
    char letra, letraSorteada;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    letraSorteada = 'a' + (rand()%26);  //Sorteia um número entre 0 e 25 que é atribuido à letra.
    printf("Aletra sorteada foi %c.\n", letraSorteada);  
    if(letra==letraSorteada){
        printf("Você acertou a letra sorteada!");  
    }else if(letra>letraSorteada){
        printf("Sua letra foi MAIOR que a letra sorteada!");
    }else if(letra<letraSorteada){
        printf("Sua letra foi MENOR que a letra sorteada!");
    }
    return 0;
}
