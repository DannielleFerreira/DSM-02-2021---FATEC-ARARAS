#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;


int posi = 0;

int busca(int pvetor[10], int pnum)
{
	int ret = 0;
	
	for (int i = 0; i < 10; i++)
		if (pvetor[i] == pnum)
		{
			posi = i;
			ret = 1;
			break;
		}
	
	return ret;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "10.Crie um programa que tenha uma função que receba um vetor de inteiros e um numero. Essa função deve fazer a busca de número nesse vetor e retornar o valor 1 caso encontre e 0 caso não encontre esse número no vetor. Se encontrar deve exibir o valor encontrado e se não encontrar apenas exibir mensagem de “Valor não encontrado”." << endl;
	
	int vetor[10] = {10,20,30,40,50,60,70,80,90,0};
	int num;
	
	cout << endl;
	
	for (int i = 0; i < 10; i++)
		cout << vetor[i] << "  ";
	
	cout << endl << endl << "Informe o número a ser localizado no vetor acima: ";
	cin >> num;
	
	if (busca(vetor, num) == 1)
		cout << endl << vetor[posi] << endl;
	else
		cout << endl << "Valor não encontrado" << endl;
	
	
	return 0;
}
