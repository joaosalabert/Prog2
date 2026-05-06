#include <stdio.h>

int main(void){
    char f[21], c;
    printf("Frase: ");
    scanf("%20[^\n]", f);   //Lê 20 caracteres e exclui o '\n' do enter.
    printf("Caractere para excluir: ");
    scanf(" %c", &c);
    int j = 0;
    for (int i=0; f[i]!='\0'; i++){
        if (f[i]!=c){
            f[j] = f[i];    //Se for diferente de c, mantém igual;
            j++;
        }
    }
    f[j] = '\0';
    printf("Frase alterada: %s", f);
    return 0;
}
