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
	
	cout << "1.Calcule em uma função separada o valor do volume de uma lata de óleo, utilizandoa fórmula abaixo, mas utilizando função que receba o raio e a altura como parâmetros de entrada e o retorno seria o volume da lata. \n VOLUME= 3.14159 * R2* ALTURA   ,  onde R é o raioda base" << endl;
	
	float raio, altura;
	
	
	cout << endl << "Informe o raio: ";
	cin >> raio;
	cout << endl << "Informe a altura: " << endl;
	cin >> altura;
	
	cout << endl << "O volume é " << volume(raio, altura) << endl;
	
	
	return 0;
}
