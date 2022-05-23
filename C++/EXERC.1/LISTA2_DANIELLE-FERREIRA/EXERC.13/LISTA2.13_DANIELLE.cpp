#include <iostream>
#include <cstdlib>
#include <locale.h>
//#include <cstring>
#include <iostream>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "13.Receber do teclado uma string (seu nome) e imprimir quantas letras A, E, I, O, U tem esta string. Considerar minúscula e maiúscula. Pode utilizar em algum momento o strlen." << endl;
	
	string nome;
	int tam;
	int vet[5] = {0,0,0,0,0};
	
	
	cout << endl << "Digite o nome: ";
	cin >> nome;
	
	tam = nome.length();
	for (int i = 0; i < tam; i++)
	{
		if ((nome[i] == 'a') || (nome[i] == 'A'))
		  vet[0] = vet[0] + 1;
		else if ((nome[i] == 'e') || (nome[i] == 'E'))
		  vet[1] = vet[1] + 1;
		else if ((nome[i] == 'i') || (nome[i] == 'I'))
		  vet[2] = vet[2] + 1;
		else if ((nome[i] == 'o') || (nome[i] == 'O'))
		  vet[3] = vet[3] + 1;
		else if ((nome[i] == 'u') || (nome[i] == 'U'))
		  vet[4] = vet[4] + 1;
	}
	
	cout << endl;
	cout << "Quantidade de letras A/a => " << vet[0] << endl;
	cout << "Quantidade de letras E/e => " << vet[1] << endl;
	cout << "Quantidade de letras I/i => " << vet[2] << endl;
	cout << "Quantidade de letras O/o => " << vet[3] << endl;
	cout << "Quantidade de letras U/u => " << vet[4] << endl<< endl;
	
	
	return 0;
}
