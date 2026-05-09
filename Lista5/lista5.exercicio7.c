#include <stdio.h>

int main(void){
    char nome[40];
    printf("Nome completo: ");
    fgets(nome, 40, stdin); //Recebe o nome por completo.
    int i=0;
    printf("%c.", nome[i]); //Imprime a primeira letra com o ponto.
    for (i; nome[i]!='\0'; i++){
        if (nome[i]==' '){  //Se a posição for um espaço em branco...
            if(nome[i+1]!='d'){ //e se a próxima letra não for um 'd', supondo que seja uma preposição...
                printf("%c.", nome[i+1]);   //imprime essa letra seguida do ponto.
            }
        }
    }
    return 0;
}
