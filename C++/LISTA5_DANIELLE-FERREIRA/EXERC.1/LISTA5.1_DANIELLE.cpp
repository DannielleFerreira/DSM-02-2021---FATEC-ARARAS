#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

int tam = 5;

struct TAtleta{
	char  nome[70]; 
	int   posicao; 
	int   idade;
	float altura;
};
struct TAtleta atleta[5];

struct TIdxIdade{
	int ind; 
	int idade;
};
struct TIdxIdade idx[5];

indexIdade(int ctrl)
{
	struct TIdxIdade aux;
	struct TIdxIdade tmp;
	
	aux.ind   = ctrl;
	aux.idade = atleta[ctrl].idade;
	
	for (int i = 0; i < ctrl; i++)
	{
		if (idx[i].idade < aux.idade)
		{
			
			tmp.ind   = idx[i].ind;
			tmp.idade = idx[i].idade;
		
			idx[i].ind   = aux.ind;
			idx[i].idade = aux.idade;
	
			aux.ind   = tmp.ind;
			aux.idade = tmp.idade;
		}
	}
	idx[ctrl].ind   = aux.ind;
	idx[ctrl].idade = aux.idade;
}

carga()
{
	for (int i = 0; i < tam; i++)
	{
		cout << endl << "Digite os dados do atleta [" << i+1 << "]" << endl;
		cout << "Nome: ";
		cin >> atleta[i].nome;
		cout << "Posição: " << endl;
		cin >> atleta[i].posicao;
		cout << "Idade: " << endl;
		cin >> atleta[i].idade;
		cout << "Altura: " << endl;
		cin >> atleta[i].altura;
		
		indexIdade(i);
	}
}

listar()
{
	
	cout << endl << "Listagem dos atletas por ordem de idade decrescente";
	cout << endl;
	cout << "IDADE | NOME | POSIÇÃO | ALTURA\n";
	cout << endl;
	for (int i = 0; i < tam; i++)
	{
		
		cout << atleta[ idx[i].ind ].idade << " | " <<
		        atleta[ idx[i].ind ].nome << " | " <<
		        atleta[ idx[i].ind ].posicao << " | " <<
		        atleta[ idx[i].ind ].altura << endl;
	}
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "1.A delegação francesa de Futsal deseja criar um programa que deva  conter o nome do atleta, sua posição, idade e altura. Crie uma estrutura representando um atleta. Escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo." << endl;
	
	carga();
	
	listar();
	
	cout << endl;
	
	return 0;
}
