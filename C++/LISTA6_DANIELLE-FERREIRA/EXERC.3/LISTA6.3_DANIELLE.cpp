#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>
#include <string.h>

using namespace std;

int tam = 5;

int notas[5];

Menu()
{

	cout << "      Menu" << endl;
	cout << "  1 - Código (A)" << endl;
	cout << "  2 - Código (B)" << endl;
	cout << "  3 - Código (C)" << endl;
	cout << "  4 - Código (D)" << endl;
	cout << "  0 - Sair" << endl;
	cout << "  Opção: " << endl;
}

P3a()
{
	int a,b,*c;
	a = 3;
	b = 4;
	c = &a;
	b++;
	*c = a+2;
	cout << a << b;
}

P3b()
{

	int a, b, *c;
	a = 4;
	b = 3;
	c = &a;
	*c = *c +1;
	c = &b;
	b = b + 4;
	cout << a << b << *c;
}

P3c()
{
	int a, b, *c, *d, *f;
	a = 4;
	b = 3;
	c = &a;
	d = &b;
	*c /= 2;
	f = c;
	c = d;
	d = f;
	cout << *c << *d;
}

int calcula(int x)  
{
	int i;
	if ((x = x * 2) > 5) 
	  return(x + 3);
	
	for(i = 0; i < 10; i++)
	{
	  if (i < 5) 
	    continue;
	  if (x > 8) 
	    break;
	  
	  x += 2;
	}
	
	return(x);
}
P3d()
{

    int a, b, c;
	char d;
	
	a = 1;
	b = 2;
	c = 3;
	d = 'A';
	
	a += b * c;
	d = (a > 7)?d-1:d+1;
	b = calcula(b);
	c = calcula(calcula(a));
	a = c++;
	cout << a << b << c << d;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	
	
	int opc = -1;
	
	do
	{
		Menu();
		cin >> opc;
		
		switch(opc)
		{
			case 1: P3a();
					break;
			case 2: P3b();
					break;
			case 3: P3c();
					break;
			case 4: P3d();
					break;
			case 0: break;
		default:
			cout << endl << "Opção inválida";
			break;
		}
		
		cout << endl << endl;
		
	} while (opc != 0);
	
	return 0;
}
