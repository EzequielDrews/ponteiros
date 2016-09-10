#include<stdio.h>

typedef struct {
	int Indice;
	char Nome [50];
	char Telefone [15];
//	char endereco [];
//	char email [];
} entrada;

int main()
{
	
	//criacao e inicializacao das variaveis e ponteiros
	entrada Pagina_01;
	entrada *Ptr = &Pagina_01;
	
//	Pagina_01.Indice = 1;
//	Pagina_01.Nome = {"Ezequiel Losekann Drews"};
//	Pagina_01.Telefone = {"(55) 9903-4995"}

	printf("\nInsira a entrada: ");
	scanf("%i", (*Ptr).Indice);

	printf("\nInsira o Nome: ");
	scanf("%s", &Pagina_01.Nome);

	printf("\nInsira o Telefone: ");
	scanf("%s", &Pagina_01.Telefone);

		printf("\nPagina: %i", Pagina_01.Indice);
		printf("\nNome: %s", Pagina_01.Nome);
		printf("\nTelefone: %s", Pagina_01.Telefone);
		
	
	//retorna 0
	return 0;
}
