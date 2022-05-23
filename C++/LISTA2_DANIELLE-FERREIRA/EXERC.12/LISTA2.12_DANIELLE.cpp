#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "12.Ler do teclado o nome, sexo e idade do usuário. Se sexo for feminino e idade menor que 25 imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA." << endl;
	
	string nome;
	string sexo;
	int idade;
	
	
	cout << endl << "Digite o nome: ";
	cin >> nome;
	cout << endl << "Informe o sexo [M]masculino / [F]feminino: ";
	cin >> sexo;
	cout << endl << "Digite a idade: ";
	cin >> idade;
	
	if (((sexo == "F") || (sexo == "f")) && (idade < 25))
		cout << endl << "ACEITA";
	else
		cout << endl << "NÃO ACEITA";

	
	
	return 0;
}
