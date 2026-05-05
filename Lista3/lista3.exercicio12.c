#include <stdio.h>
#include <conio.h>

int main() {
    char frase[81]; //Vetor com as 80 posições de caracteres mais o espaço do '\0'.
    int i=0;
    printf("Digite a letra da posição %d: ", i);
    frase[i] = getch(); //Função getch() que capta a primeira letra.
    printf("%c\n", frase[i]);   //Mostra a letra digitada e quebra a linha para a próxima captação.
    while(i<80 && frase[i]!='\r'){  //Enquanto não preencher os 80 espaços ou o usuário não digita enter.
        i++;
        printf("Digite a letra da posição %d: ", i);
        frase[i] = getch(); //Capta as seguintes letras.
        printf("%c\n", frase[i]);   //Mostra a letra digitada e quebra a linha para a próxima captação.
    }
    frase[i] = '\0';    //Faz com que a última posição da cadeia seja a final.
    for (int i=0; frase[i]!='\0'; i++){ //Percorre a cadeia de enquanto não é um '\0'.
        if(frase[i]==' '){
            printf("\n");   //Quebra a linha para o próximo caractere caso o atual seja um espaço em branco.
        }else{
            printf("%c", frase[i]); //Mostra o próximo caractere, desde que não seja um espaço em branco.
        }
    }
    return 0;
}
