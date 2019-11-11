#include <stdio.h>
#include <stdlib.h>

int TamanhoString(char str[], int maxCaracteres) {
	int tamanhoStr = 0;
	int i;

	for(i = 0; i < maxCaracteres; i++) {
		if(str[i] == 0) {
			return tamanhoStr;
		}
		tamanhoStr++;
	}
	
	return tamanhoStr;
}

main(void) {
	char str1[50];
	int tamanho;
	
	printf("Digite a palavra: ");
	scanf("%s", &str1[0]);
	
	tamanho = TamanhoString(str1, 50);
	
	printf("\n%s contem %d caracteres", str1, tamanho);
}
