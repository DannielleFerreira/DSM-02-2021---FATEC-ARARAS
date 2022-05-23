#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "9. Digite um nome do teclado, calcule e mostre quantas letras tem." << endl;
	
	char nome[70];
	string auxnome = "";


	cout << "Digite o nome: ";
	cin.getline(nome,70);
    
    int tam;
	auxnome = nome;
	tam = auxnome.length();
    cout << "\n O nome tem: \n ";
    
    int chars = 0;
    for (int i = 0; i < tam; i++) 
		if (auxnome[i] != ' ')
			chars++;
	
	cout << chars << " letras\n";
	
	
	

	return 0;
}
