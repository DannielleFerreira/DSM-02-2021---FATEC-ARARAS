#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "2.Preencher um vetor com números inteiros (10 unidades); solicitar um número do teclado.Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor esse número está. Se não existir, imprimir alguma mensagem que não existe." << endl;
	
	int nums[10] = {7,12,17,22,27,32,37,42,47,52};
	int n;
	int p = -1;
	
	
	cout << "VETOR" << endl;
	
	for (int i = 0; i < 10; i++) 
		cout << "[" << i+1 << "]=" << nums[i] << " | ";
		
	cout << endl << "Digite um número: ";
	cin >> n;
	
    for (int i = 0; i < 10; i++)
    {
    	if (nums[i] == n)
    	  p = i;
	}
	
	if (p >= 0)
		cout << endl << "O numero digitado está na posição " << p+1 << endl;
	else
		cout << endl << "O numero digitado não foi encontrado no VETOR";
	
	
	return 0;
}
