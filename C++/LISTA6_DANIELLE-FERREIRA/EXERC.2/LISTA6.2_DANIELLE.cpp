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
		cout << endl << "Informe a "<<i+1<<"� nota: ";
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
	
	cout << "2.Fazer um programa que recebe 5 valores float do usu�rio e armazene em um vetor.Esses valores s�o as notas do aluno ao longo do ano. Crie uma fun��o que recebaesse vetor e retorne a m�dia do aluno. Se a m�dia for acima de 5 exibir na tela alguma mensagem de aprova��o, se for entre 3 e 5 exibir mensagem de recupera��o e se for acima de 5 exibir mensagem de aprova��o." << endl;
	
	ler();
	
	double m = media(notas);
	
	cout << endl << "M�dia: " << m << endl;
	if (m > 5)
		cout << "Aprovado !";
	else if ((m <= 5) and (m >= 3))
		cout << "De recupera��o";
	else
		cout << "Reprovou";
	
	cout << endl << endl;
	
	return 0;
}
