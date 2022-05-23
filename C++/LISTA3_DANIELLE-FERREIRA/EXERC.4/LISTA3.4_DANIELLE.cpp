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
	
	cout << "4.Faça um programa que leia 10 valores do usuário e armazene em um vetor. Crie uma função que receba esse vetor de inteiros e faça o cálculo da diferença entre a média e o maior valor. O retorno dessa função é esse valor, que será exibido na main" << endl;
	
	int vetor[10];
	
	for (int i =0; i < 10; i++)
	{
		
		cout << "Informe a posição " << i+1 << ": ";
		cin >> vetor[i];
	}
	
	cout << endl << "Diferença entre o maior valor e a média:  " << dif(vetor) << endl << endl;
    
	
	return 0;
}
