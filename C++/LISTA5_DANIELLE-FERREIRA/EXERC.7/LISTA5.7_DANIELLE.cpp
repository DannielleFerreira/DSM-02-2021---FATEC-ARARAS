#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


int tam = 10;
double reajuste = 4.78; 

struct TProdutos{
	char   nome[70]; 
	double valor;
};
struct TProdutos prod[10];

double prodreaj[10];


carga()
{
	for (int i= 0; i < tam; i++)
	{
		cout << endl << "Informe nome do produto ["<<i+1<<"]: ";
		cin >> prod[i].nome;
		
		cout << endl << "Informe valor: ";
		cin >> prod[i].valor;
	}
}

reajustar()
{
	double *pd;
	double vlr;
	
	for (int i= 0; i < tam; i++)
	{
		pd  = &prod[i].valor;
		
		vlr = *pd  
		       + 
			  ((*pd / 100) * reajuste); 
		
		pd = &vlr;
		
		prodreaj[i] = *pd;
	}
}

listar()
{
	double *pd;
	

	
	cout << endl << "Listagem de valores" << endl;
	cout << "==========================================\n";
	cout << "| ITEM | VLR> ORIGINAL | VLR. REAJUSTADO |\n";
	cout << "==========================================\n";
	
	for (int i= 0; i < tam; i++)
	{
		pd = &prodreaj[i];
		
		cout << 
		      i+1   << "- " << 
			  prod[i].nome <<  " | " <<
		      prod[i].valor << " | "<<
		      *pd << endl;
	}
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "7.Em fun��o do aumento dos combust�veis, o setor de vendas da rede Carrefour precisa atualizar os valores de seus produtos no seu cat�logo de vendas. O presidente ordenou um aumento de 4.78% para todos os itens. S�o 10 itens no cat�logo. Sua tarefa � elaborar um programa que leia o nome e valor atual dos produtos (dados pelo usu�rio) e armazene em um vetor, e ap�s isso efetue o reajuste do valordos produtos em outro vetor. O reajuste (acesso ao vetor) dever� ser feito utilizando ponteiros. Imprima na tela o valor reajustado, usando tamb�m ponteiros." << endl;
	
	carga();
	reajustar();
	listar();
	
	cout << endl;
	
	return 0;
}
