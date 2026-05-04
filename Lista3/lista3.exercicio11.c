#include <stdio.h>
#include <ctype.h>

int main(void){
    int n;  //Quantidade de pessoas a serem analisadas.
    printf("Quantas pessoas serão analisadas? ");
    scanf("%d", &n);
    int idades[n];  //Vetor que guarda as idades.
    float alturas[n], mediaA=0; //Vetor que guarda as alturas e variável que calcula a média das alturas para a variância.
    char sexos[n];  //Vetor que guarda o sexo das pessoas.
    //Captura de todas as informções pessoa por pessoa.
    for (int i=0; i<n; i++){
        printf("Pessoa %d\n", i+1);
        printf("Idade: "); 
        scanf("%d", &idades[i]);
        printf("Altura: "); 
        scanf("%f", &alturas[i]);
        printf("Sexo[M/F]: "); 
        scanf(" %c", &sexos[i]); 
        sexos[i] = toupper(sexos[i]);   //Deixa a letra maiúsculo caso o usuário digite em minúsculo para faciitar a leitura.
        mediaA += alturas[i];   //Adiciona as alturas na soma para a média.
    }
    mediaA /= n;    //Valor final da média.
    float var=0;
    for (int i=0; i<n; i++){
        var += (alturas[i]-mediaA)*(alturas[i]-mediaA); //Calculando a variância.
    }
    var /= (n-1);   //Valor final da variância.

    int contM=0, contH=0;   //Contadores para mulheres entre 20 e 35 anos e homens com mais de 1,80m
    for (int i=0; i<n; i++){
        if(sexos[i]=='F' && idades[i]>=20 && idades[i]<=35){
            contM+=1;
        }
        if (sexos[i]=='M' && alturas[i]>1.8){
            contH+=1;
        }
        
    }
    //Print de cada informação.
    printf("São %d mulheres entre 20 e 35 anos.\n", contM);
    printf("São %d homens com mais de 1,80m.\n", contH);
    printf("A variância da altura do grupo é de %.2f", var);
    return 0;
}
