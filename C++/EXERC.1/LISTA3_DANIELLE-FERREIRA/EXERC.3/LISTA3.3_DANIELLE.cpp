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
	
	cout << "3.Faça um programa que apresente a série de Fibonacciatéo décimo quinto termo. A função deve receber esse termo e retornar o valor desse termo após a série de Fibonacci. A série é formada pela sequência: 1,1,2,3,5,8,13,21,34,....,etc." << endl;
	
	int qtde = 15;
	
	
	
	cout << endl << "Série de Fibonacci para os " << qtde <<" primeiros números: " << endl;
	for (int i = 0; i < qtde; i++) 
    	cout << fibonacci(i) << ", ";
    

    
	
	return 0;
}
