#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "6.Receber um nome do teclado e imprimir as 4 primeiras letras do nome" << endl;
	
	char nome[50];
	
	
	cout << "Digite um nome: ";
	cin.getline(nome,70);
    
    cout << "\n AS 4 primeiras letras são: \n";
    for (int i =0; i < 4; i++) {
    	
    	cout << nome[i];
	}
		
	cout << endl;
	

	return 0;
}
