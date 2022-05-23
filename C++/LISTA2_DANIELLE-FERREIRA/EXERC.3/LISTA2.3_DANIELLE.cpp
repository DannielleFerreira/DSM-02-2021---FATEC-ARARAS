#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;


int digitados = 0;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "3.Escrever um programa, que leia valores inteiros até ser lido o valor -50. Quando isso acontecer o programa deverá escrever a soma e a média dos valores lidos." << endl;
	
	float n;
	float soma  = 0;
	float media = 0;
	int p = -1;
	
	do
	{
		
		cout << endl << "Informe um numero :" ;
		cin >> n;
		
		digitados ++;
		
		if ((n != -53) and (n > 0))
		{
			soma  = soma + n;
			if (media > 0)
				media = (media + n) / 2;
			else
				media = n;
		}
	} while (n != -50);
	
	cout << endl << "Soma dos valores digitados:  " << soma <<endl;
	cout << "Média dos valores digitados: " << media << endl;
	
	
	return 0;
}
