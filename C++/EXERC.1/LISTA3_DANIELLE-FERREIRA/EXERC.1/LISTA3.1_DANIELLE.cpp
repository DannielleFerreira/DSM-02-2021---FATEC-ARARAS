#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;


float volume(float pRaio, float pAltura)
{
	return 3.1415 * (pRaio * pRaio) * pAltura;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "1.Calcule em uma fun��o separada o valor do volume de uma lata de �leo, utilizandoa f�rmula abaixo, mas utilizando fun��o que receba o raio e a altura como par�metros de entrada e o retorno seria o volume da lata. \n VOLUME= 3.14159 * R2* ALTURA   ,  onde R � o raioda base" << endl;
	
	float raio, altura;
	
	
	cout << endl << "Informe o raio: ";
	cin >> raio;
	cout << endl << "Informe a altura: " << endl;
	cin >> altura;
	
	cout << endl << "O volume � " << volume(raio, altura) << endl;
	
	
	return 0;
}
