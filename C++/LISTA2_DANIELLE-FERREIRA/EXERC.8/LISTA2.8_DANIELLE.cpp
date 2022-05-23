#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "8.Usando a função strcmp(procure na internet o que significa e como utilizar) faça um programa que leia o seu nome e sobrenome em 2 variáveis diferentes. Verifique se as strings são iguais ou diferentes e imprima na tela uma mensagem dizendo se uma é maior que a outra ou se são iguais. Utilize IF-ELSE e strcmp." << endl;
	
	char nome[70];
	char sobrenome[70];
	int r;
	
	
	cout << endl << "Digite o nome: ";
	cin >> nome;
	cout << endl << "Digite o sobrenome: ";
	cin >> sobrenome;
	
	r = strcmp(nome, sobrenome);
	
	if (r < 0)
		cout << endl << "Menor" << endl;
	else if (r > 0)
		cout << endl << "Maior" << endl;
	else
		cout << endl << "Igual" << endl;
	
	
	return 0;
}
