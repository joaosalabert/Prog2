#include <stdio.h>
#include <string.h>

int main(void){
    char p1[15], p2[15];
    printf("Palavra 1: ");
    scanf("%s", p1);
    printf("Palavra 2: ");
    scanf("%s", p2);
    if (strcmp(p1, p2)==0){ //Compara se as strings são iguais.
        printf("As palavras são iguais.\n");
    }else{
        printf("As palavras são diferentes.\n");
    }
    if (strstr(p2, p1)==NULL){  //Compara se a segunda string é sub-string da outra.
        printf("A segunda string não é uma sub-string da primeira.");
    }else{
        printf("A segunda string é uma sub-string da primeira.");
    }
    return 0;
}
