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
	
	cout << "3.Crie um programa que recebe uma matriz de inteiros positivos e substitui seus elementos de valor ímpar por -1 e os pares por +1." << endl;
	
	string msg;
	int vetor[3][3];
	int vetor2[3][3];
	
	cout << endl;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			
			
			msg = "Informe o elemento LINHA["+int2str(i+1)+"] "+"COLUNA["+int2str(j+1)+"]: ";
			cout << msg << endl;
			cin >> vetor[i][j];
		}
		
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			if ((vetor[i][j]) % 2 == 0)
				vetor2[i][j] = 1;
			else
				vetor2[i][j] = -1;
		}	
	
	cout << endl << "Matriz 2 gerada\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << vetor2[i][j] <<", ";
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;
}
