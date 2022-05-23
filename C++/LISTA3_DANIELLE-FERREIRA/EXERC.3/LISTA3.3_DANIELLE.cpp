#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;



int fibonacci(int pQtde)
{
	int F   = 0;
	int ant = 0;
	
	for (int i = 0; i < pQtde; i++)
		if (i == 1) 
	    {
        	F = 1;
        	ant = 0;
        } 
		else 
		{
        	F += ant;
        	ant = F - ant;
        }
	
	return F;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "3.Fa�a um programa que apresente a s�rie de Fibonacciat�o d�cimo quinto termo. A fun��o deve receber esse termo e retornar o valor desse termo ap�s a s�rie de Fibonacci. A s�rie � formada pela sequ�ncia: 1,1,2,3,5,8,13,21,34,....,etc." << endl;
	
	int qtde = 15;
	
	
	
	cout << endl << "S�rie de Fibonacci para os " << qtde <<" primeiros n�meros: " << endl;
	for (int i = 0; i < qtde; i++) 
    	cout << fibonacci(i) << ", ";
    

    
	
	return 0;
}
