#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

int    tam = 5;
int    codigo[5];
double preco[5];

struct TProduto{
	char   nome[70];
	int    *codigo;
	double *preco;
	char   fornecedor[50];
};
struct TProduto prod[5];


carga()
{
	for (int i = 0; i < tam; i++)
	{
		
		cout << endl << "Informe os dados do produto [" << i+1 << "] \n";
		cout << endl;
		
		cout << "Nome: ";
		cin >> prod[i].nome;
		
		cout << endl << "Código: ";
		prod[i].codigo = &codigo[i];
		cin >> *prod[i].codigo;     
		
		cout << endl << "Preço: ";
		prod[i].preco = &preco[i];
		cin >> *prod[i].preco;
		
		cout << endl << "Fornecedor: ";
		cin >> prod[i].fornecedor;
	}
}

listar()
{
	
	cout << endl << "Listagem dos produtos";
	cout << endl;
	cout << "CÓDIGO | NOME | FORNECEDOR | VALOR\n";
	cout << endl;
	for (int i = 0; i < tam; i++)
	{
		cout << *prod[i].codigo << " | " <<
		        prod[i].nome << " | " <<
		        prod[i].fornecedor << " | " <<
		        *prod[i].preco << endl;
	}
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "2.Seja a seguinte struct que é utilizada para descrever os produtos que estão no estoque de uma loja: \n struct Produto { \n char nome[30];   /* Nome do produto */  \n  int *codigo;  /* Codigo do produto */  \n double  *preco;/* Preco do produto */  \n  char fornecedor[50]    /* Fornecedor do produto*/}; \n Faça um programa que armazene 5 produtos e exiba-os na tela. Obs: fique atento, porque código e preço são ponteiros dentro de struct." << endl;
	
	carga();
	
	listar();
	
	cout << endl;
	
	return 0;
}
