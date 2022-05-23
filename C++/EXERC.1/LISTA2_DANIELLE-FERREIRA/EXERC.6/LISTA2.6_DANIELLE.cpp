#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "6.Usando a função strcat(procure na internet o quesignifica e como utilizar) faça um programa para concatenar duas strings que foram lidas do teclado (seu nome e sobrenome)." << endl;
	
	char nome[70];
	char sobrenome[70];
	
	
	cout << endl << "Digite o nome: ";
	cin >> nome;
	cout << endl << "Digite o sobrenome: ";
	cin >> sobrenome;

	strcat(nome," ");
	strcat(nome,sobrenome);
	
	cout << endl << "Nome completo => " << nome <<endl;
	
	
	return 0;
}
