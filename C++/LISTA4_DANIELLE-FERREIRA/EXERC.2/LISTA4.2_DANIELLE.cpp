#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


string int2str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "2.Criar um algoritmo que leia os elementos de uma matriz inteira de 4 x 4 e imprimir os elementos da diagonal principal." << endl;
	
	string msg;
	int vetor[4][4];
	
	
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			cout << endl;
			msg = "Informe o elemento LINHA["+int2str(i+1)+"] "+"COLUNA["+int2str(j+1)+"]: ";
			cout << msg;
			cin >> vetor[i][j];
		}
	

	cout << endl << "Os números na diagonal da matriz são: ";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j)
				cout << vetor[i][j] <<", ";
		}
	}
	
	cout << endl << endl;
	
	
	return 0;
}
