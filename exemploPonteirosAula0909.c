#include<stdio.h>

int main()
{
	//criacao e inicializacao das variaveis e ponteiros
	char Minha_string [] = {"1234567890"};
//	char Minha_string [] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	char *Meu_ponteiro = &Minha_string;
	
	//exibe o valor contido em cada posicao da string a partir do endereco contido no ponteiro
	
	do
	{
		printf("\nO meu ponteiro aponta para o valor: %c", *Meu_ponteiro);
		Meu_ponteiro ++;
	}
	while(*Meu_ponteiro != 0);
	
	printf("\nO tamanho de Minha_string e: %i", sizeof(Minha_string) );
	
	//retorna 0
	return 0;
}
