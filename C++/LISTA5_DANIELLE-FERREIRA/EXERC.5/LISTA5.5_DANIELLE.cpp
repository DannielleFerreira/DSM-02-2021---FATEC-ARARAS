#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "5.O que aparecerá quando executarmos o programa abaixo?" << endl;
	
	cout << "//código fornecido" << endl;
	cout << "Lin" << endl;
	
	cout << " 1|     int count = 10, *temp, sum = 0;" << endl;
	cout << " 2|     temp = &count;" << endl;
	cout << " 3|     *temp = 20;" << endl;
	cout << " 4|     temp = &sum;" << endl;
	cout << " 5|     *temp = count;" << endl;
	cout << " 6|     cout << “ count = ”count << “*temp = ” *temp << “sum = ” sum;" << endl;
	
	int count = 10, *temp, sum = 0;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	cout << " count = " << count << " *temp = " << *temp << " sum = " << sum;
	
	cout << endl << "count tem o valor de 20 \n O valor de temp é 20 por que aponta para sum \n sum tem o valor de 20 copiado através do ponteiro.";
	
	cout << endl;
	
	return 0;
}
