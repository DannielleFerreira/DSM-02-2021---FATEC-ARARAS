#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "4.Receba do teclado 10 n�meros e armazene eles em um vetor. Depois fa�a os seguintes procedimentos armazenando os valores em outros 3 vetores:\n -Pegar cada item do vetor e somar com o valor de algoritmo logo subsequente. Por ex: seo numero � 13 ent�o tem que somar 13 com 14 e armazenar na posi��o que estava o 13.E fazer assim para todas as �casas� do vetor.\n -Pegue cada item do vetor e some com a m�dia do vetor.\n-Pegue cada item do vetor e multiplique pelo quadrado dele mesmo. Ex: se � 3 ent�o:3*3� = 27. Armazenar o 27 onde era o 3." << endl;
	
	
    int n;
	int vet0[10];
	int vet1[10];
	int vet2[10];
	int vet3[10];
    float media;
	
	for (int i = 0; i < 10; i++) 
	{
		
		cout << "Digite um " << i+1 <<"� n�mero: ";
		cin >> n;
		
		vet0[i] = n;
		if (media > 0)
			media = (media + n) / 2;
		else
			media = n;
	};
	

	cout << "VETOR -> INFORMADO" << endl;
	for (int i = 0; i < 10; i++) 
		cout << "[" << i+1 << "]=" << vet0[i] << "   ";
	
	cout << endl << "VETOR -> SUBSEQUENTE";
	for (int i = 0; i < 10; i++) 
	{
		n = vet0[i];
		vet1[i] = n + (n + 1);
		
		cout << "[" << i+1 << "]=" << vet1[i] << "   ";
	}
	
	cout << endl << "VETOR -> VALOR + M�DIA";
	cout << "M�dia: " << media << endl;
	for (int i = 0; i < 10; i++) 
	{
		n = vet0[i];
		vet2[i] = n + media;
		
		cout << "[" << i+1 << "]=" << vet2[i] << "   ";
	}
	
	cout << endl << "VETOR -> n + (n * n) ";
	for (int i = 0; i < 10; i++) 
	{
		n = vet0[i];
		vet3[i] = n * (n * n);
		
		cout << "[" << i+1 << "]=" << vet3[i] << "   ";
	}
	cout << endl << endl;
	

	return 0;
}
