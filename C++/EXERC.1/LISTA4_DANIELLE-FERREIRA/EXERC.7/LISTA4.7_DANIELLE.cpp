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
		cout << "Triângulo Equilátero: todos os lados são iguais." << endl;
	}
	else if (tp == 2)
	{
		cout << endl;
		cout << "Triângulo Isósceles: 2 lados iguais e 1 diferente." << endl;
	}
	else if (tp == 3)
	{
		cout << endl;
		cout << "Triângulo Escaleno: todos os lados são diferentes." << endl;
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
	
	cout << "7.Faça um programa que recebe os três lados de um triângulo e diz se é equilátero, isósceles ouescaleno. Para isso, crie uma função que tenha como parâmetro os três lados do triângulo e exiba na tela qual o tipo do triângulo.  Faça o teste para verificar se os 3 lados formam mesmo um triângulo. \n https://mundoeducacao.uol.com.br/matematica/classificacao-triangulos. \n htmhttps://www.preparaenem.com/matematica/condicao-existencia-um-triangulo.htm" << endl;
	
	int a, b, c;
	
	
	cout << endl;
	cout << "==================================================\n";
	cout << "Construindo e classificando triângulos" << endl;
	cout << "==================================================\n";
	cout << endl << "Informe o lado A: ";
	cin >> a;
	cout << endl << "Informe o lado B: ";
	cin >> b;
	cout << endl << "Informe o lado C: ";
	cin >> c;
	
	if (EhTriangulo(a, b, c)) 
	{
		cout << endl << "É um triângulo." << endl;
		Classificar(a, b, c);
	}
	else
		cout << endl << "Desculpe ! \n Com esses valores não é possível formar um triângulo.";
	
	
	return 0;
}
