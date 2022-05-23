#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>
#include <string.h>

using namespace std;

int tam = 5;

int notas[5];

ler()
{
	for (int i= 0; i < tam; i++)
	{
		cout << endl << "Informe a "<<i+1<<"ª nota: ";
		cin >> notas[i];
	}
}

media(int n[])
{
	double t = 0;
	
	for (int i= 0; i < tam; i++)
	  t = t + n[i];
	
	return (t / tam);
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "2.Fazer um programa que recebe 5 valores float do usuário e armazene em um vetor.Esses valores são as notas do aluno ao longo do ano. Crie uma função que recebaesse vetor e retorne a média do aluno. Se a média for acima de 5 exibir na tela alguma mensagem de aprovação, se for entre 3 e 5 exibir mensagem de recuperação e se for acima de 5 exibir mensagem de aprovação." << endl;
	
	ler();
	
	double m = media(notas);
	
	cout << endl << "Média: " << m << endl;
	if (m > 5)
		cout << "Aprovado !";
	else if ((m <= 5) and (m >= 3))
		cout << "De recuperação";
	else
		cout << "Reprovou";
	
	cout << endl << endl;
	
	return 0;
}
