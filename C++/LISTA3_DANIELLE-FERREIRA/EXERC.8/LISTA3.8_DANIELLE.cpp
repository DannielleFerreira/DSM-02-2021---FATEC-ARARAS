#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;



int tamanho(char pnome[70], char psobrenome[70])
{
	char comp[100];
	strcat(comp, pnome);
	strcat(comp, psobrenome);
	
	return strlen(comp);
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "8.Criar um programa que receba dois arrays de char (string), sendo um nome e outro o sobrenome.Essa função deve retornar o tamanho do nome completo dessa pessoa, ou seja, já concatenados(usar strcat e strlen)." << endl;
	
	char nome[70], sobrenome[70];
	
	
	
	cout << endl << "Digite o nome: ";
	cin >> nome;
	cout << endl << "Digite o sobrenome: ";
	cin >> sobrenome;
	
    cout << endl << "Tamanho = " << tamanho(nome, sobrenome) << endl << endl;
    
	
	return 0;
}
