#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "5.Usando a funçãostrcpy(procure na internet o que significa e como utilizar) faça um programaque leia o seu nome do teclado, armazene em uma variável, depois utilize strcpy e depois printa na tela uma outra variável com o seu nome." << endl;
	
	char v1[50];
	char v2[50];
	

	cout << endl << "Digite o nome: ";
	cin >> v1;
	strcpy(v2, v1);
	
	cout << endl << "Print = " << v2 <<endl;
	
	
	return 0;
}
