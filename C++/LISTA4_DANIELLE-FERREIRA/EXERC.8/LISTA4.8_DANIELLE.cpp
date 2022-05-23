#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>

using namespace std;


bool Validar(float a, float b, float c)
{
	if ((a == 0) or
	    (b == 0) or
	    (c == 0))
		return false;
	else
		return true;
}

Bhascara(float a, float b, float c)
{
	float delta, x1, x2;
	

	delta = pow(b,2) - (4 * a * c);
	
	
	x1 = (-b + sqrt(delta) ) / (2 * a);
	x2 = (-b - sqrt(delta) ) / (2 * a);
	
	cout << endl;
	
	cout << "X1 = " << x1 <<endl;
	cout << "X2 = " << x2 <<endl;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "8.Faça um programa que calcule a fórmula de Bháskara. Para isso, crie uma função que tenha como parâmetro de entrada os 3 valores a, b e c e retorne o valor da soma das raízes. Para que a fórmula de Bháskara seja completa, todas as variáveis devem ser diferente de zero (faça o teste de verificação).Dica: use a função sqrt da biblioteca cmath. \n https://www.educamaisbrasil.com.br/enem/matematica/formula-de-bhaskara" << endl;
	
	float a, b, c;
	
	
	cout << endl;
	cout << "==================================================\n";
	cout << "Bháskara\n";
	cout << "==================================================\n";
	cout << "Digite o valor A: ";
	cin >> a;
	cout << "Digite o valor B: ";
	cin >> b;
	cout << "Digite o valor C: ";
	cin >> c;
	
	if (Validar(a, b, c))
		Bhascara(a, b, c);
	else
		cout << endl << "Valores inválidos. \n Nenhum valor pode ser zero.";
	
	return 0;
}
