#include <stdio.h>

int maior(int a, int b, int c){
    int maior = a;  //Iniciando a como maior.
    if (b>maior){
        maior = b;  //Caso b seja maior que a, a variável maior recebe b.
    } if (c>maior){
        maior = c;  //Caso c seja maior que o maior, a variável maior recebe c.
    }
    return maior;
}

int menor(int a, int b, int c){
    int menor = a;  //Iniciando a como menor.
    if (b<menor){
        menor = b;  //Caso b seja menor que a, a variável menor recebe b.
    } if (c<menor){
        menor = c;  //Caso c seja menor que o menor, a variável menor recebe c.
    }
    return menor;
}

int pares(int a, int b, int c){
    if(a%2==0){
        printf("Números pares: %d", a); //Para caso a seja par.
        if(b%2==0){
            printf(" %d", b);   //Para caso de além de a, b seja par.
        } if(c%2==0){
            printf(" %d", c);   //Para caso de além de a e/ou b, c seja par.
        }
    } else if(b%2==0){
        printf("Números pares: %d", b); //Para caso b seja par.
        if (c%2==0){
            printf(" %d", c);   //Para caso de além de b, c seja par.
        }
    } else if (c%2==0){
        printf("Números pares: %d", c); //Para caso c seja par
    } else{
        printf("Não há número par.");   //No caso de não ter pares.
    }
}

float media(int a, int b, int c){
    float media = (a+b+c)/3.0;  //Calculando a média.
    return media;
}

int main(void){
    int a, b, c;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);  //Recebendo os números para análise.
    printf("Maior número: %d\n", maior(a, b, c));
    printf("Menor número: %d\n", menor(a, b, c));
    pares(a, b, c); //Ativando a função para saber se é par.
    printf("\nA média é: %.2f", media(a, b, c));
    return 0;
}
