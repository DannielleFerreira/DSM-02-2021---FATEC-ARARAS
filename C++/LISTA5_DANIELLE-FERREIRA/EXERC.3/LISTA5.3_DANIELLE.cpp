#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "3.Examine o seguinte c�digo: \n int arr[5] = { 30, 20, 50, 70, 10 }; \n int *parr = &arr[4]; \n int inx = 0;inx = *parr++; \n a) O c�digo compila? \n b) Ap�s executar o c�digo, qual ser� o valor de inx? \n c) Ap�s executar o c�digo, para onde parr estar� apontando?" << endl;
	
	
	int arr[5] = { 30, 20, 50, 70, 10 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	//--------------------
	
	cout << endl<< "c�digo fornecido";
	cout << "Lin" << endl;
	cout << " 1|     int arr[5] = { 30, 20, 50, 70, 10 };" << endl;
	cout << " 2|     int *parr = &arr[4];" << endl;
	cout << " 3|     int inx = 0;" << endl;
	cout << " 4|     inx = *parr++;" << endl;
	
	cout << "Perguntas: " << endl;
	cout << "a) O c�digo compila ?" << endl;
	cout << "R: YES" << endl;
	cout << "b) Ap�s executar o c�digo, qual ser� o valor de inx ?" << endl;
	cout << "R: " << inx << endl;
	cout << "c) Ap�s executar o c�digo, para onde parr estar� apontando ?" << endl;
	cout << "R: " << endl;

	cout << endl << "VETOR";
	cout << "ENDERE�O | VALOR\n";
	for(int i = 0; i<5;i++)
	  cout << &arr[i] << " | "  << arr[i]<< endl;
	
	cout << endl << "parr";
	cout << "ENDERE�O GUARDADO => " << parr << endl;
	cout << "VALOR NO ENDERE�O => " << *parr << endl;
	
	cout << endl;

	return 0;
}
