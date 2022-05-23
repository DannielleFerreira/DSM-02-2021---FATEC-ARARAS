#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;


int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "11.Faça um programa que leia do teclado 10 números inteiros e armazene em um vetor. Sem 1ordenar, determine o maior e o menor número e imprima-os na tela." << endl;

	
	int vet0[10];
	int maior;
	int menor;
	
	for (int i = 0; i < 10; i++) 
	{
		cout << endl << "Digite um " << i+1 <<"º número: ";
		cin >> vet0[i];
	};
	
	
	
	cout << endl << "VETOR -> DIGITADO";
	for (int i = 0; i < 10; i++)
		cout << "[" << i+1 << "]=" << vet0[i] << "   ";
	
	
	menor = 9999999;
	maior = -111111;
	for (int i = 0; i < 10; i++)
	{
		if (vet0[i] < menor)
		   menor = vet0[i];
		if (vet0[i] > maior)
		   maior = vet0[i];
	}
	
	cout << endl << "Menor valor digitado: " << menor;
	cout << endl << "Maior valor digitado: "   << maior;
	cout << endl << endl;
	

	return 0;
}
