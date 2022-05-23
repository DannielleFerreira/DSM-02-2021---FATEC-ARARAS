#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


Menu()
{
	cout << endl << endl;
	cout << "\n=============================\n";
	cout << "    MENU";
	cout << "\n+++++++++++++++++++++++++++++\n";
	cout << "A ->  Entrada" << endl;
	cout << "B ->  Prato principal" << endl;
	cout << "C ->  Sobremesa" << endl;
	cout << "Q ->  Sair" << endl;
	cout << "\n==============================\n";
	cout << "OPÇÃO: ";
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "4.Utilizando o switch-case use as letras a, b, c e q de quit (podendo ser maiúsculo ou minúsculo, para isso procure na internet por case acumulado) para criar um cardápio de restaurante com 3 itens: entrada, prato principal e sobremesa. Dentro de cada item apenas exiba na tela o que terá em cada um dos pratos." << endl;
	
	char opc;
	
	do
	{
		
		Menu();
		cin >> opc;
		opc = toupper(opc);
		
		switch(opc) 
		{
			case 'A':
				{
					cout << endl << "salgadinhos";
			
					break;
				}
			case 'B':
				{
					cout << endl << "Strogonofe de franfo";
					
					break;
				}
			case 'C':
				{
					cout << endl << "Gelatina de frutas";
					
					break;
				}
			case 'Q': break;
			default:
				{
					cout << endl << "Opção inválida";
				
					break;
				}
		}
	} while (opc != 'q');
	
	cout << endl;
	
	return 0;
}
