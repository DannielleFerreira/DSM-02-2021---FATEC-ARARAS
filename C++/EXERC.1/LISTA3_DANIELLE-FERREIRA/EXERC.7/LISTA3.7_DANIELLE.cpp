#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;



int tipochr(char x)
{
	x = toupper(x);
	
	if ((x == 'A') || (x == 'E') || (x == 'I') || (x == 'O') || (x == 'U') )
	  return 1;
	else
	  return 0;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "7.Criar uma fun��o que receba um caractere como par�metro e retorne 1 (um) caso seja uma vogal e zero caso n�o seja. Exiba a mensagem �� vogal� ou �N�o � vogal� dentro da fun��o main(principal), ou seja, vai precisar de um if para verificar o retorno dessa fun��o." << endl;
	
	char c(1);
	string aux;
	
	
	cout << endl << "Digite um caracter: ";
	cin >> c;
	cout << endl;
	
	if (tipochr( c ) == 1)
		aux = "� vogal";
	else
    	aux = "N�o � vogal";
    
    cout << aux << endl << endl;
    
	
	return 0;
}
