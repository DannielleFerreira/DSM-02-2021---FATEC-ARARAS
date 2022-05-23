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

		
	cout << endl << "Escreva a 1ª frase: ";
	cin.getline(frase1,100);

	cout << endl << "Escreva a 2ª frase: ";
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
	
	cout << "9.Crie um programa que leia do teclado duas frases. \n a)Através de ponteiro, determine quantas letras tem a primeira frase (ou seja, use o ponteiro para percorrer o array de char). \n b)Verifique o tamanho dessa segunda frase (usando strlen), use strcpy para copiar a segunda frase numa terceira variável e compare as duas frases usando strcmp. Faça essa parte usando uma função que recebe como parâmetro as duas frases e retorne o tamanho da maior frase." << endl;
	
	carga();
	
	cout << endl;
	cout << "Com função que varre arrei(considerando o espaço como letra)" << endl;
	cout << endl <<  "A 1ª frase contém "<<tamanhoA(frase1)<<" letras";
	cout << endl << "Com função strlen";
	cout << "A 2ª frase contém "<<tamanhoA(frase2)<<" letras" << endl;
	
	cout << "A maior frase (frase2 <-> frase3(cópia)) contém "<<
	        copycompare(frase2, frase3)
	        <<" letras";
	
	cout << endl;
	
	return 0;
}
