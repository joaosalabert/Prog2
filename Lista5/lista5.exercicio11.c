#include <stdio.h>
#include <string.h>

int main(void){
    char str[21];
    printf("Frase: ");
    fgets(str, 20, stdin);  //Recebe a string por completo.
    int tam = strlen(str);
    for (tam; tam>=0; tam--){
        printf("%c", str[tam]); //Percoore e imprime a string de trás pra frente.
    }
    return 0;
}
