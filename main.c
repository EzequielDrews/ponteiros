//**************************************************
//Programa exemplo de utilizacao de ponteiros      *
//                                                 * 
//Laborat�rio de Algoritmo II                      *   
//                                                 *
//Autor: Ezequiel Drews                            *   
//Data: 02/09/2016                                 *
//**************************************************

//Funcionalidade do progrma
//Forma de distribui��o do programa


#include<stdio.h>

//v�riaveis globais
int numero;
int *Ptr_numero;

main()
{	//exibe mensagem ao usu�rio
	printf("Insira um numero");
	
	//pega o valor que o usu�rio inserir e joga no local de memoria da variavel
	scanf("%d", &numero);
	
	//imprime o numero inserido pelo usu�rio
	printf("Ola mundo %i\n", numero);
}
