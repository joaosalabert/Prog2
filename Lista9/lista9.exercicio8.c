#include <stdio.h>

struct data { 
    int dd, mm, aa; /* Dia, mes e ano */  
}; 
typedef struct data Data; 

struct compromisso { 
    char descricao[81]; /* Descricao do compromisso */  
    Data dta; /* Data do compromisso */  
}; 
typedef struct compromisso Compromisso;

Compromisso* busca(int n, Compromisso** vet, int d, int m, int a){
    int inicio=0, fim = n-1;    //Decreta onde a busca vai começar e terminar.
    while (inicio<=fim){     //Loop até que o começo e  fim se cruzem.
        int meio = inicio+((fim-inicio)/2); //Decreta o meio que será usado para dividir o vetor.
        if (vet[meio]->dta.aa>a){   //Caso o ano buscado seja menor que do indice atual:
            fim = meio-1;   //O novo fim é o anterior ao ano do atual índice.
        }else if (vet[meio]->dta.aa<a){ //Caso o ano buscado seja maior que do índice atual:
            inicio = meio+1;    //O novo início é o posterior ao ano do atual índice.
        }else{  //Caso os anos sejam iguais:
            if (vet[meio]->dta.mm>m){   //Caso o mes buscado seja menor que do indice atual:
                fim = meio-1;   //O novo fim é o anterior ao mes do atual índice.
            }else if (vet[meio]->dta.mm<m){ //Caso o mes buscado seja maior que do índice atual:
                inicio = meio+1;    //O novo início é o posterior ao mes do atual índice.
            }else{  //Caso os meses também sejam iguais:
                if (vet[meio]->dta.dd>d){  //Caso o dia buscado seja menor que do indice atual: 
                    fim = meio-1;   //O novo fim é o anterior ao dia do atual índice.
                }else if (vet[meio]->dta.dd<d){ //Caso o dia buscado seja maior que do índice atual:
                    inicio = meio+1;    //O novo início é o posterior ao dia do atual índice.
                }else{  //Caso os dias também sejam iguais: 
                    return vet[meio];   //Retorna o compromisso da data buscada.
                }
            }
        }
    }
    return NULL;    //Caso não haja compromisso para a data buscada.
}

int main(void){
    Compromisso c1 = {"Médico", {1, 2, 2021}};  //Inicializando o compromisso 1.
    Compromisso c2 = {"Aniversário", {1, 2, 2022}}; //Inicializando o compromisso 2.
    Compromisso c3 = {"Jogo", {3, 4, 2022}};    //Inicializando o compromisso 3.
    Compromisso c4 = {"Prova", {5, 4, 2022}};   //Inicializando o compromisso 4.
    Compromisso c5 = {"Dia das Mães", {14, 5, 2023}};   //Inicializando o compromisso 5.
    Compromisso *vet[] = {&c1, &c2, &c3, &c4, &c5}; //Inicializando o vetor de compromissos.
    int tam=5, dd, mm, aa;
    printf("Data procurada [dd/mm/aa]: ");
    scanf("%d/%d/%d", &dd, &mm, &aa);
    Compromisso *res = busca(tam, vet, dd, mm, aa);
    if (res==NULL){
        printf("Não tem compromisso nessa data.");
    }else{
        printf("Compromisso da data %d/%d/%d foi %s.", dd, mm, aa, res->descricao);
    }
    return 0;
}
