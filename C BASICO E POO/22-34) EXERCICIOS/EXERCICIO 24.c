#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL,"Portuguese");

	char s[N];
	int i;
		
	printf("Digite um texto:\n");
	gets(s);
	i = strlen(s);
	printf("\nTamanho do texto: %d\n\n", i);
	
	printf("Impress�o de posi��o a posi��o:\n");
	for(i=0;i<strlen(s);i++){
		printf("%c", s[i]);
	}
}

