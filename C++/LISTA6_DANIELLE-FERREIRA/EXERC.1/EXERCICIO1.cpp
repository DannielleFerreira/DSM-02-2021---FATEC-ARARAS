#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <string.h>

using namespace std;


char entrada[100] = "";


carga()
{

	cout << endl << "Digite (SIM/NAO): ";
	cin.getline(entrada,100);
}

teste(char c[100])
{

    for (int i = 0; i < strlen(c); i++)
    	
    	c[i] = toupper(c[i]);
    
	string c2 = c;
	if (c2 == "NAO")
		return 0;
	else if (c2 == "SIM")
		return 1;
	else
		return -1;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "1. Fazer um programa que recebe uma string do teclado e passa esse array para uma função. Essa função deve retornar o valor 1 se o string digitado foi 'sim' e 0 se o string digitado foi 'não'. A rotina só deve retornar alguma coisa se o string digitado for 'sim'ou 'não', então faça o tratamento disso." << endl;
	
	carga();
	
	int r = teste(entrada);
	
	if (r == 1)
		cout << "Digitou SIM";
	else if (r == 0)
		cout << "Digitou NAO";
	else
		cout << "Digitou outra coisa";
	
	cout << endl << endl;

	return 0;
}
