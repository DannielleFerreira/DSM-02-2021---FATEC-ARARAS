#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "1.Faça um programa que apresente o total da soma dos cem primeiros números inteiros." << endl;
	
	int i, soma = 0;
	
	for (int i = 0; i <= 100; i++){
			
		soma = soma + i;
		

	}
	
	cout << endl << "Resultado: " << soma << endl;
	
	return 0;
}
