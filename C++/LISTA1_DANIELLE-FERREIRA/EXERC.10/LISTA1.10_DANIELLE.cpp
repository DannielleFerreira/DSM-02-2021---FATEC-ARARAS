#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "10.Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres." << endl;
	
	char nome[70];
	string auxnome = "";
	
	
	cout << "Digite o nome: " << endl;
	cin.getline(nome,70);
    
    int tam;
	auxnome = nome;
	tam = auxnome.length();
    
    cout << endl << tam << " caracteres\n";
    
    
    for (int i = 0; i < tam; i++) 
		cout << i+1 << " => " << auxnome << endl;
	
	
	return 0;
}
