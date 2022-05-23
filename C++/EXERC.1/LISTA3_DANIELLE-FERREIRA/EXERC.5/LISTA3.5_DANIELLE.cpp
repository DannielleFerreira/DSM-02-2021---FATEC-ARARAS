#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;

int func(float v1, float v2, float v3)
{
	float calc;
	calc = (v1 * v1) + v2 + v3;
	
	return (int)calc;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "5.Criar uma função que retorna o seguinte: A função recebe 3 valores float e retornar o quadrado do 1º + a soma dos outros dois. Vai retornar o tipo inteiro, ou seja, tem que fazer um cast do valor (procurar cast de float para inteiro na internet)." << endl;
	
	float valor1, valor2 ,valor3;
	
	
	
	cout << "Informe o valor 1: ";
	cin >> valor1;
	cout << "Informe o valor 2: ";
	cin >> valor2;
	cout << "Informe o valor 3: ";
	cin >> valor3;
	
	cout << endl << "Resultado:  " << func(valor1, valor2, valor3) << endl << endl;
    
	
	return 0;
}
