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
	
	cout << "4.Crie um jogo onde o computador sorteia um n�mero de 1 at� 10, e voc� tenta adivinhar qual � o n�mero. Use fun��o que fa�a esse sorteio aleat�rio. Procure nainternet por Rand, Srand e Random." << endl;
	
	Sortear();
	
	int num = 0;
	cout << endl << "Digite um numero (1 - 10): ";
	cin >> num;
	
	cout << endl << " O numero sorteado foi " << n;
	if (num == n)
		cout << endl << ". Parabens voc� acertou !" << endl;
	else
		cout << " . Que pena, voc� n�o acertou !";
	
	return 0;
}
