#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h>

using namespace std;

int n = 0;


Sortear()
{
	srand(time(NULL));
	n = rand() %10 + 1;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "4.Crie um jogo onde o computador sorteia um número de 1 até 10, e você tenta adivinhar qual é o número. Use função que faça esse sorteio aleatório. Procure nainternet por Rand, Srand e Random." << endl;
	
	Sortear();
	
	int num = 0;
	cout << endl << "Digite um numero (1 - 10): ";
	cin >> num;
	
	cout << endl << " O numero sorteado foi " << n;
	if (num == n)
		cout << endl << ". Parabens você acertou !" << endl;
	else
		cout << " . Que pena, você não acertou !";
	
	return 0;
}
