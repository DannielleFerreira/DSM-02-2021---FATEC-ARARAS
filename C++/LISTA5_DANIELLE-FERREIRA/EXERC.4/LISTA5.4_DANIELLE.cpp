#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "4.Considere o seguinte código: \n char* nome1 = "Luis"; \n char* nome2 = "Fernando"; \n char* nome3 = "Vitoria"; \n char* nome4 = "Leticia"; \n Use strcat para concatenar os nomes. \n Crie a função: void exibir (char arr, int tamanho); \n Escreva o conteúdo da função exibir, sabendo que ela deve percorrer o array de nomes e printar o array inteiro utilizando ponteiro." << endl;
	
	
	char* nome1 = "Luis";
    char* nome2 = "Fernando";
    char* nome3 = "Vitoria";
    char* nome4 = "Leticia";
	
	cout << endl;

	return 0;
}
