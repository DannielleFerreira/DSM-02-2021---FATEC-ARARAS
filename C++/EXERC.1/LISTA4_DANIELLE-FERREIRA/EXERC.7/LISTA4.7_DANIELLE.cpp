#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


bool EhTriangulo(int a, int b, int c)
{
	if ((a + b < c) or
	    (a + c < b) or
	    (b + c < a))
		return false;
	else
		return true;
}

void triangulo(int tp)
{
	if (tp == 1)
	{
		cout << endl;
		cout << "Tri�ngulo Equil�tero: todos os lados s�o iguais." << endl;
	}
	else if (tp == 2)
	{
		cout << endl;
		cout << "Tri�ngulo Is�sceles: 2 lados iguais e 1 diferente." << endl;
	}
	else if (tp == 3)
	{
		cout << endl;
		cout << "Tri�ngulo Escaleno: todos os lados s�o diferentes." << endl;
	}
}

Classificar(int a, int b, int c)
{
	int tp;
	
	if ((a == b) and (b == c))
		tp = 1;
	else if ( 
	          ((a == b) and (b != c)) or
	          ((a == c) and (b != c)) or
	          ((b == c) and (a != b)) 
	        )
		tp = 2;
	else if ((a != b) and (b != c))
		tp = 3;
	
	triangulo(tp);
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "7.Fa�a um programa que recebe os tr�s lados de um tri�ngulo e diz se � equil�tero, is�sceles ouescaleno. Para isso, crie uma fun��o que tenha como par�metro os tr�s lados do tri�ngulo e exiba na tela qual o tipo do tri�ngulo.  Fa�a o teste para verificar se os 3 lados formam mesmo um tri�ngulo. \n https://mundoeducacao.uol.com.br/matematica/classificacao-triangulos. \n htmhttps://www.preparaenem.com/matematica/condicao-existencia-um-triangulo.htm" << endl;
	
	int a, b, c;
	
	
	cout << endl;
	cout << "==================================================\n";
	cout << "Construindo e classificando tri�ngulos" << endl;
	cout << "==================================================\n";
	cout << endl << "Informe o lado A: ";
	cin >> a;
	cout << endl << "Informe o lado B: ";
	cin >> b;
	cout << endl << "Informe o lado C: ";
	cin >> c;
	
	if (EhTriangulo(a, b, c)) 
	{
		cout << endl << "� um tri�ngulo." << endl;
		Classificar(a, b, c);
	}
	else
		cout << endl << "Desculpe ! \n Com esses valores n�o � poss�vel formar um tri�ngulo.";
	
	
	return 0;
}
