#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;



void imparpar(int pnum)
{
	string msg = "";
	
	if (pnum % 2 == 1)
	  msg = "� impar";
	else
	  msg = "� par";
	  
	cout << endl << msg << endl << endl;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "9.Crie um programa que tenha uma fun��o que receba um inteiro e verifique se � par ou impar. A mensagem de �� par� ou �� impar� deve ser exibida na pr�pria fun��o, ou seja, a fun��o em si n�o deve retornar nada." << endl;
	
	int num;
	
	
	cout << endl << "Digite um n�mero: ";
	cin >> num;
	imparpar(num);
	
	
	return 0;
}
