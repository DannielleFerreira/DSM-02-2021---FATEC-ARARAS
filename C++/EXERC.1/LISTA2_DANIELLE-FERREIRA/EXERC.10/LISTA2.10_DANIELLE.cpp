#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;


int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "10.Faça um programa que leia do teclado 10 números inteiros e armazene em um vetor.Depois ordene o vetor de forma decrescente. Após isso imprima esse vetor." << endl;
	
	int vet0[10];
	int vet1[10];
	int aux;
	int aux2;
	
	for (int i = 0; i < 10; i++) 
	{
		
		cout << endl << "Digite um " << i+1 <<"º número: ";
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
				if (aux > vet1[j])
				{
					aux2    = vet1[j];
					vet1[j] = aux;
					aux     = aux2;
				}
			vet1[i] = aux;
		}		
	}
	
	cout << endl << "VETOR -> ORDEM DECRESCENTE\n";
	for (int i = 0; i < 10; i++)
		cout << "[" << i+1 << "]=" << vet1[i] << "   ";
	
	cout << endl << endl;
	
	
	return 0;
}
