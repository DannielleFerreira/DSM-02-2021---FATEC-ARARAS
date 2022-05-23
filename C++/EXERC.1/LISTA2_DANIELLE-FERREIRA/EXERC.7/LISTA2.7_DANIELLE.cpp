#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "7.Usando a função strlen(procure na internet o quesignifica e como utilizar) faça um programaque leia o seu nome e sobrenome em 2 variáveis diferentes e imprima o numero de caracteresde cada uma delas." << endl;
	
	char nome[50];
	char sobrenome[50];
	
	
	cout << endl << "Digite o nome: ";
	cin >> nome;
	cout << endl << "Digite o sobrenome: ";
	cin >> sobrenome;
	
	cout << endl << "O nome tem " << strlen(nome) << " caracteres.";
	cout << endl << "O sobrenome tem " << strlen(sobrenome) << " caracteres." << endl;
	
	
	return 0;
}
