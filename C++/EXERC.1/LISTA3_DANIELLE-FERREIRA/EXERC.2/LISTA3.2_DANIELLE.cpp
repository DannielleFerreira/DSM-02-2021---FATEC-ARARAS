#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;


float conversao(float pCelcius)
{
	return ((9 * pCelcius) + 160) / 5;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "2.Faça um programa que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. Fazer isso usando função, onde receba o valor em graus Celsius eretorneovalor em Fahrenheit. A fórmula de conversão é:F=(9 * C + 160) / 5, onde F é a temperatura em Fahrenheit e C em graus Centígrados." << endl;
	
	float Celcius;
	
	
	cout << endl << "Digite os graus Celcius: ";
	cin >> Celcius;
	
	cout << endl << "Convertido para Fahrenheit => " << conversao(Celcius) << endl;
	
	
	return 0;
}
