#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "3.Examine o seguinte código: \n int arr[5] = { 30, 20, 50, 70, 10 }; \n int *parr = &arr[4]; \n int inx = 0;inx = *parr++; \n a) O código compila? \n b) Após executar o código, qual será o valor de inx? \n c) Após executar o código, para onde parr estará apontando?" << endl;
	
	
	int arr[5] = { 30, 20, 50, 70, 10 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	//--------------------
	
	cout << endl<< "código fornecido";
	cout << "Lin" << endl;
	cout << " 1|     int arr[5] = { 30, 20, 50, 70, 10 };" << endl;
	cout << " 2|     int *parr = &arr[4];" << endl;
	cout << " 3|     int inx = 0;" << endl;
	cout << " 4|     inx = *parr++;" << endl;
	
	cout << "Perguntas: " << endl;
	cout << "a) O código compila ?" << endl;
	cout << "R: YES" << endl;
	cout << "b) Após executar o código, qual será o valor de inx ?" << endl;
	cout << "R: " << inx << endl;
	cout << "c) Após executar o código, para onde parr estará apontando ?" << endl;
	cout << "R: " << endl;

	cout << endl << "VETOR";
	cout << "ENDEREÇO | VALOR\n";
	for(int i = 0; i<5;i++)
	  cout << &arr[i] << " | "  << arr[i]<< endl;
	
	cout << endl << "parr";
	cout << "ENDEREÇO GUARDADO => " << parr << endl;
	cout << "VALOR NO ENDEREÇO => " << *parr << endl;
	
	cout << endl;

	return 0;
}
