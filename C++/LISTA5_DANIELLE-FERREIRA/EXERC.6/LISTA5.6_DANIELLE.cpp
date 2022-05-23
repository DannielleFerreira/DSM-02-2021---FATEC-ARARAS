#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

int tam = 3;

int    vi[3];
double vd[3];
char   vc[3];

lerinteiros()
{
	for (int i= 0; i < tam; i++)
	{
	
		cout << "Informe o "<<i+1<<" n�mero inteiro: ";
		cin >> vi[i];
	}
}

lerdecimais()
{
	for (int i= 0; i < tam; i++)
	{
	
		cout << "Informe o "<<i+1<<" n�mero decimal: ";
		cin >> vd[i];
	}
}

lerchar()
{
	for (int i= 0; i < tam; i++)
	{
		cout << "Informe o "<<i+1<<" n�mero caracter: ";
		cin >> vc[i];
	}
}

trocavalores()
{
	int    *pi;
	double *pd;
	char   *pc;
	
	for (int i= 0; i < tam; i++)
	{
		pi  = &vi[i];
		*pi = 2014;
		
		pd  = &vd[i];
		*pd = 9.99;
		
		pc  = &vc[i];
		*pc = 'Y';
	}
}

listar()
{
	cout << endl <<  "Listagem de valores";
	cout << "-----------------------------------------" << endl;
	cout << "| POSI��O | ITEIRO | DECIMAL | CARACTER |" << endl;
	cout << "-----------------------------------------" << endl;
	
	for (int i= 0; i < tam; i++)
	{
		cout << "    "<<
		      i+1   << "   | "<<
		      vi[i] << "   | "<<
		      vd[i] << "   | "<<
		      vc[i] << endl;
	}
}


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "6.AMicrosoft est� contratando funcion�rios para realizarem testes no gerenciador de mem�ria do seu novo computador. Seu programa dever� ler 3 n�meros inteiros, 3 n�meros decimais, 3 letras, armazen�-las em vari�veis, e depois, atrav�s de ponteiros, trocar os seus valores, substituindo todos os n�meros inteiros pelo n�mero 2014,os decimais por 9.99, e as letras por �Y�. Depois da substitui��o, o programa dever� exibir o valor das vari�veis j� devidamente atualizadas." << endl;

	
	lerinteiros();
	lerdecimais();
	lerchar();
	
	trocavalores();
	listar();
	
	cout << endl;
	
	return 0;
}
