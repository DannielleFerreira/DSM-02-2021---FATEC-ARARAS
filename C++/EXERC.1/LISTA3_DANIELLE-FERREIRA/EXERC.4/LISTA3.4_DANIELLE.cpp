#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;


int dif(int v[])
{
	int soma = 0, maior = 0;
	int media = 0, dif = 0;
	
	for (int i =0; i < 10; i++)
	{
		soma = soma + v[i];
		
		if (v[i] > maior)
		  maior = v[i];
	}
	
	media = soma / 10;
	dif = maior - media;
	if (dif < 0)
		dif = dif * -1;
	
	cout << endl << "Maior valor: " << maior;
	cout << endl << "Media: " << media;
	
	return dif;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "4.Fa�a um programa que leia 10 valores do usu�rio e armazene em um vetor. Crie uma fun��o que receba esse vetor de inteiros e fa�a o c�lculo da diferen�a entre a m�dia e o maior valor. O retorno dessa fun��o � esse valor, que ser� exibido na main" << endl;
	
	int vetor[10];
	
	for (int i =0; i < 10; i++)
	{
		
		cout << "Informe a posi��o " << i+1 << ": ";
		cin >> vetor[i];
	}
	
	cout << endl << "Diferen�a entre o maior valor e a m�dia:  " << dif(vetor) << endl << endl;
    
	
	return 0;
}
