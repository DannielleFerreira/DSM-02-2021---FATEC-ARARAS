#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>
#include <string.h>

using namespace std;


int tam = 100;
char frase1[100] = "", 
     frase2[100] = "",
     frase3[100] = "";



carga()
{

		
	cout << endl << "Escreva a 1� frase: ";
	cin.getline(frase1,100);

	cout << endl << "Escreva a 2� frase: ";
	cin.getline(frase2,100);
}

int tamanhoA(char fr[100])
{
	char *ptr;
	int count = 0;
	
	for (int i = 0; i < tam; i++)
	{
		ptr = &fr[i];
		
		if ( (*ptr != ' ') and (*ptr != NULL) )
		  count++;
	}
	
	return count;
}

int tamanhoB(char fr[100])
{
	int count = 0;
	count = strlen(fr);
	return count;
}

int copycompare(char fO[100], char fD[100])
{
	
	strcpy(fD, fO);
	
	
	int x = strcmp(fO, fD);
	
	if (x < 0)	
		return tamanhoA(fD);
	else if (x == 0)
		return tamanhoA(fO);
    else if (x > 0)
		return tamanhoA(fO);
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "9.Crie um programa que leia do teclado duas frases. \n a)Atrav�s de ponteiro, determine quantas letras tem a primeira frase (ou seja, use o ponteiro para percorrer o array de char). \n b)Verifique o tamanho dessa segunda frase (usando strlen), use strcpy para copiar a segunda frase numa terceira vari�vel e compare as duas frases usando strcmp. Fa�a essa parte usando uma fun��o que recebe como par�metro as duas frases e retorne o tamanho da maior frase." << endl;
	
	carga();
	
	cout << endl;
	cout << "Com fun��o que varre arrei(considerando o espa�o como letra)" << endl;
	cout << endl <<  "A 1� frase cont�m "<<tamanhoA(frase1)<<" letras";
	cout << endl << "Com fun��o strlen";
	cout << "A 2� frase cont�m "<<tamanhoA(frase2)<<" letras" << endl;
	
	cout << "A maior frase (frase2 <-> frase3(c�pia)) cont�m "<<
	        copycompare(frase2, frase3)
	        <<" letras";
	
	cout << endl;
	
	return 0;
}
