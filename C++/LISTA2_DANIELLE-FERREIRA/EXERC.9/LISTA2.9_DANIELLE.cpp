#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "9.Fa�a um programa que leia do teclado 10 n�meros e armazene em um vetor. Depois ordene ovetor de forma crescente. Ap�s isso imprima esse vetor." << endl;
	
	int vet0[10];
	int vet1[10];
	int aux;
	int aux2;
	
	for (int i = 0; i < 10; i++) 
	{
		cout << "Digite um " << i+1 <<"� n�mero: ";
		cin >> vet0[i];
	};
	
	
	cout << endl << "VETOR -> DIGITADO";
	for (int i = 0; i < 10; i++)
		cout << "[" << i+1 << "]=" << vet0[i] << "   ";
	
	
	for (int i = 0; i < 10; i++)
	{
		aux = vet0[i]; 
		if (i == 0)
			vet1[i] = aux;
		else
		{
			for (int j = 0; j < i; j++) 
				if (aux < vet1[j])
				{
					aux2    = vet1[j];
					vet1[j] = aux;
					aux     = aux2;
				}
			vet1[i] = aux;
		}		
	}
	
	cout << endl << "VETOR -> ORDENADO";
	for (int i = 0; i < 10; i++)
		cout << "[" << i+1 << "]=" << vet1[i] << "   ";
	
	cout << endl << endl;
	
	
	return 0;
}
