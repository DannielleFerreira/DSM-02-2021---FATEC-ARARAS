#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <string.h>

using namespace std;

int regs = 0;

struct TAgenda
{
	char nome[70];
	char cel[25];
};
struct TAgenda *Agenda = NULL;

Menu()
{
	cout << endl << endl;
	cout << "     Agenda " << endl;
	cout << "  1 - Adicionar" << endl;
	cout << "  2 - Consultar" << endl;
	cout << "  3 - Lista" << endl;
	cout << "  0 - Sair" << endl;
	cout << "  Opção: "  << endl;
}

Adicionar(TAgenda *a)
{
	cout << "    Novo contato\n" << endl;

	
	char aux[100] = "";
	
	cout << "Digite o nome: ";
	cin.ignore();
	cin.getline(aux,100);
	strcpy(a[regs-1].nome ,aux);
	
	cout << endl << "Digite o telefone: ";
	cin.ignore();
	cin.getline(aux,100);
	strcpy(a[regs-1].cel ,aux);
	
	cout << endl;
	cout << "Contato adicionado na agenda." << endl;
	
}
int Localizar(string *p, TAgenda *a)
{
	int posicao = -1;
	
	for (int i=0; i<regs; i++)
	{
		if (*p == a[i].nome)
		{
			posicao = i;
			break;
		}
	}
	
	return posicao;
}
Consultar(TAgenda *a)
{
	
	char aux[100];
	string pesq;
	
	cout << endl << "Digite o nome a pesquisar: ";
	cin.ignore();
	cin.getline(aux,100);
	pesq = aux;
	
	int posi = Localizar(&pesq, a);
	if (posi >= 0)
	{
		cout << endl;
		cout << "  Nome localizado." << endl;
		cout << "["<<posi<<"]";
		cout << " Nome: " << a[posi].nome << endl;
		cout << "    CEL: " << a[posi].cel << endl << endl;
	}
	else
	{
		cout << endl << "  Nome não localizado na agenda." << endl;
	}
	
}
//-------------------------------------------------Funções para listar
Listar(TAgenda *a)
{
	cout << endl;
	cout << " Listagem pela inicial do nome" << endl;


	char letra[1];
	cout << "    * => para todos\n";
	cout << "Informe a letra inicial: ";
	cin >> letra[0];
	
	if (letra[0] == '*')
	{
		cout << endl << "Listagem completa";
		for (int i =0; i < regs; i++)
		{
			cout << "["<<i<<"]";
			cout << " Nome: " << a[i].nome << endl;
			cout << "   CEL: " << a[i].cel << endl << endl;
		}
	}
	else
	{
		cout << endl << "Listagem de nomes inicados com a letra [ " << letra[0] << " ]" << endl;
		for (int i =0; i < regs; i++)
		{
			if (a[i].nome[0] == letra[0])
			{
				cout << "["<<i<<"]";
				cout << " Nome: " << a[i].nome << endl;
				cout << "    Cel: " << a[i].cel << endl << endl;
			}
		}

	}

}
int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "5.Construir um programa que implementa uma agenda eletrônica. O programa deve ter um menu com as seguintes opções: \n 1- Entrar um nome e telefone na agenda. \n 2- Imprimir na tela os dados de uma das pessoas cadastradas (consulta pornome). \n 3- Exibir na tela a lista dos nomes que começam pela letra indicada. \n 4- Sair do programa. \n Obs 1: usar alocação dinâmica para cada contato inserido. n\ Obs 2: usar função (passagem de parâmetros por referência) para os 3 primeiros itensdo menu." << endl;
	
	char opc[1];
	
	do
	{
		opc[0] = ' ';
		
		Menu();
		cin >> opc[0];
		
		switch(opc[0])
		{
			case '1': {regs += 1;
    				Agenda = (TAgenda*)realloc(Agenda, regs * sizeof(TAgenda));

					Adicionar(Agenda);
					break;
					}
			case '2': {
					Consultar(Agenda);
					break;
					}
			case '3': {
					Listar(Agenda);
					break;
					}
			case '0': break;
		default:
			cout << endl << "Opção inválida";
			
			break;
		}
		
		cout << endl << endl;
	} while (opc[0] != '0');
	
	free(Agenda);
	
	return 0;
}
