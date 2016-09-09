//*************************************************************
// Programa exemplo de utilização de ponteiros                *
//                                                            *
// Laboratório de Algoritmo II                                *
//                                                            *
// Autor: Ezequiel L. Drews                                   *
// Data: 02/09/2016                                           *
//*************************************************************

#include <stdio.h>
#include <stdlib.h>

// criação da função que realiza a troca das posições
void trocaPosicao(int *p1, int *p2)
{
	//criação da variavel auxiliar para efetuar a troca
	int aux = 0;
	aux = *p1;
	*p1 = *p2;
	*p2 = aux;
}

main(void)
{
	
	// criacao e inicializacao das variaveis
	int variavel_1 = 1, variavel_2 = 2;	
	char controle = 'n', descarga;
	
	// criacao dos ponteiros
	int *ponteiro_1, *ponteiro_2;
	
	// enquanto
	while(1)
	{
		// inicializacao dos ponteiros
		p_1 = &var_1; // ponteiro_1 recebe o endereco de variavel_1
		p_2 = &var_2; // ponteiro_2 recebe o endereco de variavel_2
		
		// exibe o valor contido em cada variavel a partir do endereco contido nos ponteiros
		printf("\nVariavel_1 = %i", *p_1);
		printf("\nVariavel_2 = %i", *p_2);
		
		//swap
		
		trocaPosicao(p_1, p_2);
		
		// exibe o valor contido em cada variavel a partir do endereço contido nos ponteiros
		printf("\n Variavel1 depois do swap: %i", *p_1);
		printf("\n Variavel2 depois do swap: %i", *p_2);
		
		// exibe a solicitacao de controle
		printf("\n\nDeseja finalizar o programa? (s/n)");
		
		// efetua a leitura do comando
		scanf("%c", &controle);
		
		// se o comando indicar a finalizacao, finaliza o loop
		if(controle == 's') break;
		
		// exibe a solicitacao de um valor
		printf("\nDigite um valor para a variavel_1 ");
		
		// efetua a leiturado valor e transfere o valor para a variavel_1
		scanf("%i", p_1);
		
		// exibe a solicitacao de um valor
		printf("\nDigite um valor para a variavel_2 ");
		
		// efetua a leitura do valor e transfere o valor para a variavel_2
		scanf("%i%c", p_2, &descarga);
		//scanf("%i", p_2, &descarga);
	}
	// retorna 0
	return 0;
}
