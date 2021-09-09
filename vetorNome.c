#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Portuguese");
	
	char PAUSA;
	char nome[10];
	int n = 10;
	int i;
	printf("Qual é seu nome: ");
	scanf("%[^\n]",&nome);
	while((getchar() != '\n'));
	
	printf("\n");
	printf("====================\n");
	printf("Olá %s .\n", nome);
	printf("====================\n");
	printf("\n");
	
	printf("Tecle <ENTER> para Terminar");
	PAUSA = getchar();
}
