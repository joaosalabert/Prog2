#include <stdio.h>

int mdc(int x, int y){
    int mdc = 1;    //Inicializa com o divisor universal.
    if(x==y){   
        mdc = x;    //Se os número forem iguais, o MDC é o próprio número.
    }else if(x>y){
        for(int i=1; i<=y; i++){ //Loop para ir até o menor número, já que o MDC não pode ser maior.
            if (x%i==0 && y%i==0){
                mdc = i;    //Caso o número seja divisor dos dois, ele vira o MDC, assim por diante até o maior.
            }
        }
    }else if(y>x){
        for(int i=1; i<=x; i++){ //Loop para ir até o menor número, já que o MDC não pode ser maior.
            if(x%i==0 && y%i==0){
                mdc = i;    //Caso o número seja divisor dos dois, ele vira o MDC, assim por diante até o maior.
            }
        }
    }
    return mdc;
}

int main(void){
    int x, y;
    printf("Informe o valor de x e y: ");
    scanf("%d %d", &x, &y);
    printf("O MDC de %d e %d é %d.", x, y, mdc(x, y));
    return 0;
}
