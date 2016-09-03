//**************************************************
//Programa exemplo de utilizacao de ponteiros      *
//                                                 * 
//Laboratório de Algoritmo II                      *   
//                                                 *
//Autor: Ezequiel Drews                            *   
//Data: 02/09/2016                                 *
//**************************************************

//Funcionalidade do progrma
//Forma de distribuição do programa


#include<stdio.h>

//váriaveis globais
int numero;
int *Ptr_numero;

main()
{	//exibe mensagem ao usuário
	printf("Insira um numero");
	
	//pega o valor que o usuário inserir e joga no local de memoria da variavel
	scanf("%d", &numero);
	
	//imprime o numero inserido pelo usuário
	printf("Ola mundo %i\n", numero);
}
