#include <stdio.h>
#include <stdlib.h>

void CamelCase(char *s);    //Protótipoda função

int main(void) {
	char *s;
	s = malloc(50*sizeof(char));    //Alocação dinâmica para receber a frase.
	printf("Digite uma frase para o Camel Case: ");
	fgets(s, 50, stdin);    //Recebendo a frase como um todo
	CamelCase(s);
	printf("Frase em CamelCase: %s.", s);   //Resultado da função; a frase nova.
	return 0;
}

void CamelCase(char *s) {
	for(int i=0; s[i]!='\0'; i++) { //Percorrendo a frase.
		if(s[i]==' ') {
			s[i+1] -= 32;   //Se houver um espaço, a próxima letra fica maiúscula.
			for(int j=i; s[j]!='\0'; j++) {     //A partir do espaço, "puxa" os outros elementos para frente, excluindo o espaço em branco.
				s[j] = s[j+1];
			}
		}
	}
}