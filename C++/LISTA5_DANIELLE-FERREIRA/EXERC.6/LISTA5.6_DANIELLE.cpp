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
	
		cout << "Informe o "<<i+1<<" número inteiro: ";
		cin >> vi[i];
	}
}

lerdecimais()
{
	for (int i= 0; i < tam; i++)
	{
	
		cout << "Informe o "<<i+1<<" número decimal: ";
		cin >> vd[i];
	}
}

lerchar()
{
	for (int i= 0; i < tam; i++)
	{
		cout << "Informe o "<<i+1<<" número caracter: ";
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
	cout << "| POSIÇÃO | ITEIRO | DECIMAL | CARACTER |" << endl;
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
	
	cout << "6.AMicrosoft está contratando funcionários para realizarem testes no gerenciador de memória do seu novo computador. Seu programa deverá ler 3 números inteiros, 3 números decimais, 3 letras, armazená-las em variáveis, e depois, através de ponteiros, trocar os seus valores, substituindo todos os números inteiros pelo número 2014,os decimais por 9.99, e as letras por ’Y’. Depois da substituição, o programa deverá exibir o valor das variáveis já devidamente atualizadas." << endl;

	
	lerinteiros();
	lerdecimais();
	lerchar();
	
	trocavalores();
	listar();
	
	cout << endl;
	
	return 0;
}
