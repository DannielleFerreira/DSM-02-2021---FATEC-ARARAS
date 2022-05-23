#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;


int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "8.Receber um nome do teclado e imprimir as letras na posição par." << endl;
	
	char nome[70];
	string auxnome = "";
	
	
	cout << "Informe o nome: ";
	cin.getline(nome,70);
    
    int tam;
	auxnome = nome;
	tam = auxnome.length();
	
    cout << "\n As letras nas posições pares, são: \n";
    for (int i = 0; i < tam; i++) {
    	
    	if ((i+1) % 2 == 0)
			cout << auxnome[i];
	
	}
    	
	cout << endl;
	
	
	return 0;
}
