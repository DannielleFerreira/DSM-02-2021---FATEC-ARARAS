#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;



void imparpar(int pnum)
{
	string msg = "";
	
	if (pnum % 2 == 1)
	  msg = "É impar";
	else
	  msg = "É par";
	  
	cout << endl << msg << endl << endl;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "9.Crie um programa que tenha uma função que receba um inteiro e verifique se é par ou impar. A mensagem de “É par” ou “É impar” deve ser exibida na própria função, ou seja, a função em si não deve retornar nada." << endl;
	
	int num;
	
	
	cout << endl << "Digite um número: ";
	cin >> num;
	imparpar(num);
	
	
	return 0;
}
