#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "2.Fa�a um programa que pegue um nome at� 20 caracteres do teclado e depois escreva-o natela de tr�s pra frente." << endl;
	
	char nome[20];
	string inv;
	
	cout << endl << "Digite o nome: ";
	cin.getline(nome,20);
	
	int tam;
	inv = nome;
	tam = inv.length();
	inv = "";
	
	for (int i = tam; i >= 0; i--) {
		inv = inv + nome[i];
	}
		
	cout << "Nome invertido: " << inv << endl;
	
	return 0;
}
