#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "3.Ler um n�mero do teclado e imprimir todos os n�meros de 1 at� o n�mero lido. Depois,imprimir o produto dos n�meros." << endl;

	int num  = 0;
	int prod = 1;
	
	cout << endl << "Digite um n�mero: ";
	cin >> num;
	
	cout << "\n\n Ordem dos n�meros \n";
	for (int i = 1; i <= num; i++){
		cout << i << endl;
		prod = prod * i;
	}
	
	cout << "\n Produto dos n�meros: " << prod << endl;
	

	return 0;
}
