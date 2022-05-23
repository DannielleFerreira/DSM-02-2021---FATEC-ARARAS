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
	
	cout << "7.Criar uma função que receba um caractere como parâmetro e retorne 1 (um) caso seja uma vogal e zero caso não seja. Exiba a mensagem “É vogal” ou “Não é vogal” dentro da função main(principal), ou seja, vai precisar de um if para verificar o retorno dessa função." << endl;
	
	char c(1);
	string aux;
	
	
	cout << endl << "Digite um caracter: ";
	cin >> c;
	cout << endl;
	
	if (tipochr( c ) == 1)
		aux = "É vogal";
	else
    	aux = "Não é vogal";
    
    cout << aux << endl << endl;
    
	
	return 0;
}
