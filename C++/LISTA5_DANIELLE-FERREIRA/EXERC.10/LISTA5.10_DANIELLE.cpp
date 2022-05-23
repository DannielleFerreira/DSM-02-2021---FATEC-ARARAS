#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

int tam = 9;

int num[9];

carga()
{
	int n;
	int *pi;
	pi = &n;
	
	for (int i= 0; i < tam; i++)
	{

		cout << endl << "Digite o "<<i+1<<"º numero: ";
		cin >> *pi;
		num[i] = *pi;
	}
}

ordenar()
{
	int temp;
	int *p1, *p2, *ptemp;
	ptemp = &temp;
	
    for(int i=0; i<(tam-1); i++)
    {
    	for (int j=0; j<(tam-i-1); j++)
    	{
        	if (num[j] > num[j+1])
            {
            	p1 = &num[j];
            	p2 = &num[j+1];
				
				*ptemp = *p1;
            	*p1    = *p2;
            	*p2    = *ptemp;
            }
        }
    }
}

listarVetor()
{
	int *ptr;
	
	
	cout << endl << "Números ordenados [Vetor]";
	for (int i = 0; i < tam; i++)
	{
		ptr = &num[i];
		cout << *ptr << ", ";
	}
	cout << endl;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "10.Crie um programa que leia do teclado uma sequência de 10 números e armazene em um vetor.Depois disso, ordene os números de forma crescente. Por último, exiba o vetor. Faça todo o exercicio usando somente ponteiro." << endl;
	
	carga();
	ordenar();
	listarVetor();
	
	cout << endl;

	return 0;
}
