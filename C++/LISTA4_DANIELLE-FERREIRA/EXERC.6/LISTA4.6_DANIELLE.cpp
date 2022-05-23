#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

Menu()
{
	cout << endl << endl;
	cout << "===========================\n";
	cout << "          MENU\n";
	cout << "===========================\n";
	cout << "1 -> Saque\n";
	cout << "2 -> Extrato\n";
	cout << "3 -> Transfer�ncia\n";
	cout << "4 -> Dep�sito\n";
	cout << "===========================\n";
	cout << "OP��O: ";
}

namespace BK
{
	enum {Saque=1, Extrato, Transf, Deposito};
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << endl << "6.Criar um menu simples, de um sistema banc�rio.Vamos exibir alguns couts com as op��es: \n 1. Saque \n 2. Extrato \n 3. Transfer�ncia \n 4. Dep�sito. \n\n Em cada case do switch, dizemos que op��o ela escolheu.Caso a pessoa digite qualquer coisa que n�o seja essa op��o, cai no default que avisa que a op��o � inv�lida." << endl;
	
	
	int opc;

	Menu();
	cin >> opc;
	
	switch(opc) 
	{
		case (BK::Saque):
			{
				cout << endl << "Selecionou Saque";
				break;
			}
		case (BK::Extrato):
			{
				cout << endl << "Selecionou Extrato";
				break;
			}
		case (BK::Transf):
			{
				cout << endl << "Selecionou Transfer�ncia";
				break;
			}
		case (BK::Deposito):
			{
				cout << endl << "Selecionou Dep�sito";
				break;
			}
		default:
			{
				cout << endl << "Op��o inv�lida";
				break;
			}
	}
	
	cout << endl;
	
	return 0;
}
