#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c, x1, x2, delta;
    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);  //Coletando as variáveis da equação.
    if(a==0){   //No caso de a ser 0, não é possível ser uma equação quadrática.
        printf("Não é uma equação de 2º grau por 'a' ser 0.");
        return 0;
    }
    delta = b*b-4*a*c;  //Calculando o delta para descobrir as raízes.
    if(delta<0){    //Delta sendo menor que 0 a equação não possui raízes.
        printf("A equação não possui raízes reais.");
    }else if(delta==0){ //Delta sendo 0 a equação possui apenas uma raiz.
        x1 = -b/(2*a);
        printf("A equação possui uma raiz: %d", x1);
    }else{
        x1 = (-b+sqrt(delta))/(2*a);    //Raiz 1.
        x2 = (-b-sqrt(delta))/(2*a);    //Raiz 2.
        printf("As raizes da equacao sao: %d e %d\n", x1, x2);
    }
    return 0;
}
