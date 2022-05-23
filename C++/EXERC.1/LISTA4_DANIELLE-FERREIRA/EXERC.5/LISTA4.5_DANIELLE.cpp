#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


namespace DS
{
	enum {Domingo=1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "5.Utilizando o tipo de dado e num e switch, crie um programa que recebe um valor num�rico do usu�rio, de 1at� 7, e diga que dia da semana �. Por exemplo, domingo � 1, segunda � 2, ter�a � 3... Diga que ele digitou um valor errado tamb�m, caso o fa�a." << endl;
	
	int opc;
	
	
	
	cout << endl << "Digite o numero do dia da semana(1-7): ";
	cin >> opc;
	
	switch(opc) 
	{
		case (DS::Domingo):
			{
				cout << endl << "Domingo";
				break;
			}
		case (DS::Segunda):
			{
				cout << endl << "Segunda";
				break;
			}
		case (DS::Terca):
			{
				cout << endl << "Ter�a";
				break;
			}
		case (DS::Quarta):
			{
				cout << endl << "Quarta";
				break;
			}
		case (DS::Quinta):
			{
				cout << endl << "Quinta";
				break;
			}
		case (DS::Sexta):
			{
				cout << endl << "Sexta";
				break;
			}
		case (DS::Sabado):
			{
				cout << endl << "S�bado";
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
