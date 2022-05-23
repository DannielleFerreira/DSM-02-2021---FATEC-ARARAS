#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "3.Ler um número do teclado e imprimir todos os números de 1 até o número lido. Depois,imprimir o produto dos números." << endl;

	int num  = 0;
	int prod = 1;
	
	cout << endl << "Digite um número: ";
	cin >> num;
	
	cout << "\n\n Ordem dos números \n";
	for (int i = 1; i <= num; i++){
		cout << i << endl;
		prod = prod * i;
	}
	
	cout << "\n Produto dos números: " << prod << endl;
	

	return 0;
}
