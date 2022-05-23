#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "4.Faça um programa que receba do usuário dez temperaturas em graus Fahrenheit,transforme-as em graus Celsius e armazene os resultados em um vetor. Terminada a entradade dados, os valores armazenados devem ser exibidos. Obs.: A fórmula é C = 5/9 (F – 32)." << endl;
	
	float gF[10];
	float gC[10];
	
	for (int i = 0; i < 10; i++){
		
		cout << "Informe "<<i+1<<".Temperatuda em graus Fahrenheit: ";
		cin >> gF[i];
		
		gC[i] = ((5.0/9.0) * (gF[i] - 32));
    }
    
    cout << "Resultado da conversão\n" << "  Fahrenheit   Celcius  \n";
	for (int i = 0; i < 10; i++) {
		cout <<  i+1 << "  -  "<< gF[i] << "  -  " << gC[i] << endl;
	}
	
	return 0;
}
