#include<stdio.h>

int main()
{
	//criacao e inicializacao de variaveis
	int variavel_1 = 1, variavel_2 = 2;
	char controle = 'n', descarga;
	
	//criacao de ponteiros
	int *ponteiro_1, *ponteiro_2;
	
	//enquato
	while(1)
	{
		//inicializacao dos ponteiros
		ponteiro_1 = &variavel_1;//ponteiro_1 recebe endereço de variavle_1
		ponteiro_2 = &variavel_2;//ponteiro_2 recebe endereço de variavle_2
		
		//exibe valor contido em cada variavel a partir do endereço contido
		//nos ponteiros
		printf("\nVariavel_1 = %i", *ponteiro_1);
		printf("\nVariavel_2 = %i", *ponteiro_2);
		
		
		//exibe a solicitação de controle
		printf("\n\nDeseja finalizar o programa? (s/n)");
		//efetua a leitura do comando
		scanf("%c", &controle);
		//se o comando indicar a finalizacao, finaliza logo
		if(controle == 's') break;
		
		//exibe a solicitacao de um valor
		printf("\nDigite um valor para a variavel_1: ");
		//efetua a leitura do valor e transfere o valor para variavel_1
		scanf("%i", ponteiro_1);
		//exibe a solicitacao de um valor
		printf("\nDigite um valor para a variavel_2: ");
		//efetua a leitura do valor e transfere o valor para variavel_2
		//scanf("%i%c", ponteiro_2, &descarga);
		scanf("%i", ponteiro_2);		
	}
	
	//retorna 0
	return 0;
}
