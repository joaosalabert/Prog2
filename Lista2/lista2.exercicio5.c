#include <stdio.h>

int main(void){
    int n1, n2;
    printf("Informe o valor de n1: ");  //Valor de X.
    scanf("%d", &n1);
    printf("Informe o valor de n2: ");  //Valor de Z.
    scanf("%d", &n2);
    while (n2<n1){  //Evita que Z seja maior que X.
        printf("Informe o valor de n2: ");
        scanf("%d", &n2);
    }
    int sum = 0;
    int cont = 0;
    for (int i=n1; sum<n2; i++){    //Loop começa em X e termina quando a soma dos valores consecutivos for maior que Z.
        sum += i;   //Soma os números consecutivos enquanto o loop estiver ativo.
        cont += 1;  //Conta quantos números foram necessários para a soma ultrapassar Z.
    }
    printf("O resultado da soma foi %d e foram necessários %d números consecutivos.", sum, cont);
    return 0;
}
