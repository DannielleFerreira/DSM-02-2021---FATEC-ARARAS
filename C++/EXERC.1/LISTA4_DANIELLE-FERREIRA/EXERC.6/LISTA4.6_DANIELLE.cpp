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
	cout << "3 -> Transferência\n";
	cout << "4 -> Depósito\n";
	cout << "===========================\n";
	cout << "OPÇÃO: ";
}

namespace BK
{
	enum {Saque=1, Extrato, Transf, Deposito};
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << endl << "6.Criar um menu simples, de um sistema bancário.Vamos exibir alguns couts com as opções: \n 1. Saque \n 2. Extrato \n 3. Transferência \n 4. Depósito. \n\n Em cada case do switch, dizemos que opção ela escolheu.Caso a pessoa digite qualquer coisa que não seja essa opção, cai no default que avisa que a opção é inválida." << endl;
	
	
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
				cout << endl << "Selecionou Transferência";
				break;
			}
		case (BK::Deposito):
			{
				cout << endl << "Selecionou Depósito";
				break;
			}
		default:
			{
				cout << endl << "Opção inválida";
				break;
			}
	}
	
	cout << endl;
	
	return 0;
}
