#include <stdio.h>

int divs(int n, int *max, int *min){
    int mi=n, ma=1, cont=2; //mi começa com vaor de n para que seja possível captar um menor, ma começa como 1 para ser contabilizado o maior, e cont começa com valor de 2 contando 1 e o próprio n.
    for(int i=2; i<n; i++){ //Percorre a partir do 2 pois ja conta o um para divisor e excclui o 0, e vai ate 1 antes de n para que n não seja contabilizaado de novo.
        if(n%i==0){ //Caso i seja divisível por n, entra na função.
            cont+=1;    //Adiciona 1 ao contador 
            if(i>ma){
                ma = i;
            }
            if (i<mi){
                mi = i;
            }  
        }     
    }
    *max = ma;
    *min = mi;
    if(cont==2){
        printf("É primo.");
        return 0;
    }else{
        printf("Não é primo.\n");
        printf("O maior divisor foi %d, e o menor foi %d.", ma, mi);
        return 1;
    } 
}

int main(void){
    int n, max, min;
    printf("Digite um número: ");
    scanf("%d", &n);
    divs(n, &max, &min);
}
