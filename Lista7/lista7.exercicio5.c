#include <stdio.h>
#include <conio.h>

int main(void){
    char str[81], tecla;
    int i=0;
    printf("Frase: ");
    //Recebe e imprime os caracteres válidos da string:
    while (tecla!='\r' && i<80){
        tecla = getch();
        if (tecla==' '){
            printf("%c", tecla);    //Não recebe o espaço em branco mas imprime para o usuário na hora da digitação.
        }
        if (tecla>='A' && tecla<='Z' || tecla>='a' && tecla<='z'){
            str[i] = tecla;
            printf("%c", tecla);
            i++;
        }
    }
    str[i] = '\0';  //Fecha a string com o caractere final.
    for (i=0; str[i]!='\0'; i+=5){  //Percorre a string em blocos de 5 letras.
        for (int j=0; j<5 && str[j]!='\0'; j++){    //Percorre as letras do bloco.
            switch (j){
                case 0:
                    str[i]+=1;
                    break;
                case 1:
                    str[i+1]+=2;
                    break;
                case 2:
                    str[i+2]+=3;
                    break;
                case 3:
                    str[i+3]+=4;
                    break;
                case 4:
                    str[i+4]+=5;
                    break;
                default:
                    break;
            }
        }
    }
    printf("\nString mudada: %s", str);
    return 0;
}
