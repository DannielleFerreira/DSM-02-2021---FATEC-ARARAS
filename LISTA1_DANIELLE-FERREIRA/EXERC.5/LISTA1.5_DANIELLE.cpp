#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "5.Leia um vetor de 10 valores inteiros e exiba todos os valores ímpares." << endl;
	
	int valores[10];
	
	for (int i = 0; i < 10; i++){
		
		cout << endl << "Digite o "<< i + 1 <<" número : ";
		cin >> valores[i];
    }
    
    cout << endl << "Números ímpares \n";
	for (int i = 0; i < 10; i++){
		
		if (valores[i] % 2 == 1){
			
			cout <<  "Numero impar na posição " <<i+1 << " : " << valores[i] << endl;
		}
		
	}
	
	return 0;
}
