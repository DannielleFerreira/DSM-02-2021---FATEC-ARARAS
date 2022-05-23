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
	
	cout << "1.Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e imprimir outra matriz multiplicando cada elemento da primeira matriz por 2." << endl;
	
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
			vetor2[i][j] = vetor[i][j] * 2;
		}	
	
	
	cout << endl << "Matriz 2 gerada";
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
