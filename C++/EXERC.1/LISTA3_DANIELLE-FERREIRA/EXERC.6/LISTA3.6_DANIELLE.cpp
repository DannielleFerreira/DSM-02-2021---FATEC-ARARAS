#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>
#include <math.h>

using namespace std;


int func(float x, float y, float z)
{
	float calc;
	
	// (x^2 / y^2) + y^z
	calc = (pow(x,2.0) / pow(y,3.0)) + pow(y,z);
	
	return (int)calc;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "6.Criar uma função que retorna o seguinte: A função recebe 3 valores float (n1,N2,n3)e retornar o (x^2/y^3)+y^z. Vai retornar o tipo inteiro, ou seja, tem que fazer um cast do valor (procurar cast defloat para inteiro na internet)." << endl;
	
	float n1, N2 ,n3;
	
	
	cout << endl << "Informe o valor 1: ";
	cin >> n1;
	cout << endl << "Informe o valor 2: ";
	cin >> N2;
	cout << endl << "Informe o valor 3: ";
	cin >> n3;
	
	cout << endl << "Resultado:  " << func(n1, N2, n3) << endl << endl;
    
	
	return 0;
}
