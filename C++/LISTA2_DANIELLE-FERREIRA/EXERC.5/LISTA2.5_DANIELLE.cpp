#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "5.Usando a fun��ostrcpy(procure na internet o que significa e como utilizar) fa�a um programaque leia o seu nome do teclado, armazene em uma vari�vel, depois utilize strcpy e depois printa na tela uma outra vari�vel com o seu nome." << endl;
	
	char v1[50];
	char v2[50];
	

	cout << endl << "Digite o nome: ";
	cin >> v1;
	strcpy(v2, v1);
	
	cout << endl << "Print = " << v2 <<endl;
	
	
	return 0;
}
