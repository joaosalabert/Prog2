#include <stdio.h>

int main(void){
    char f[51], freq[256];
    printf("Frase: ");
    scanf("%50[^\n]", f);   //Lendo a frase com máximo de 50 caracteres.
    for (int i=0; f[i]!='\0'; i++){
        int cont=0; //Contador para cada letra.
        for (int j=0; f[j]!='\0'; j++){ //Percorre denovo a frase para contar quantos tem de cada letra.
            if (f[i]==f[j]){
                cont+=1;    //Adiciona 1 ao contador se achar uma igual.
            }
        }
        int repetido = 0;
        for (int k=0; k<i; k++){
            if (f[k]==f[i]){    //Confere se está contando uma letra que já foi contada.
                repetido = 1;
                break;
            }
        }
        if (!repetido){ //Mostra cada letra e sua frequência.
            printf("'%c' = %d\n", f[i], cont);
        }
    }
    return 0;
}
