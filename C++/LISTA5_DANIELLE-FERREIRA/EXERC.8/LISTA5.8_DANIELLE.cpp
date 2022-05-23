#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


int tam = 9;

int num[9];
int mat[3][3];

carga()
{
	int n;
	int *pi;
	
	for (int i= 0; i < tam; i++)
	{
		
		
		cout << endl << "Digite o "<<i+1<<"º número: ";
		cin >> n;
		
		pi = &n;
		num[i] = *pi;
	}
}

ordenar()
{
	int temp;
	
    for(int i=0; i<(tam-1); i++)
    {
    	for (int j=0; j<(tam-i-1); j++)
    	{
        	if (num[j] > num[j+1])
            {
            	temp = num[j];
            	num[j] = num[j+1];
            	num[j+1] = temp;
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

matriz()
{
	int ctrl = 0;
	
    for(int i=0; i < 3; i++)
    	for (int j=0; j < 3; j++)
    	{    		
    		mat[i][j] = num[ctrl];
    		ctrl++;
		}
}

listarMatriz()
{
	int *ptr;
	
	
	cout << endl << "Números ordenados [Matriz]";
    for(int i=0; i < 3; i++)
    {
    	for (int j=0; j < 3; j++)
		{
			ptr = &mat[i][j];
			cout << *ptr << ", ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "8.Crie um programa que leia 9 valores inteiros do usuário. Esses valores devem ser variados, podendo ser repetidos. \n a)Use ponteiro para popular o vetor. \n b)Ordene o vetor de forma crescente (use bubble sort) \n c)Crie uma matriz 3x3 e popule essa matriz com os valores do vetor, usando ponteiro. \n d)Exiba cada elemento do vetor e da matriz, usando ponteiro." << endl;
	
	carga();
	ordenar();
	
	matriz();
	listarVetor();
	listarMatriz();
	
	cout << endl;
	
	return 0;
}
