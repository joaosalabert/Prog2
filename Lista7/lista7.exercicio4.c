#include <stdio.h>

void frase(char *fra){
    printf("Frase: ");
    fgets(fra, 27, stdin);  //Recebe a frase.
}

void imprime(){
    char fra[27];
    frase(fra); //Põe a frase nesta função. 
    puts(fra);  //Imprime a frase.
}

int main(void){
    imprime();
    return 0;
}
