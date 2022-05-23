#include <iostream>

using namespace std;


int main() 
{
	
	cout << "1.Fazer um programa que gere a saida. * * * * * * * * * * * *O,2,4,6,8,10,12,14* * * * * * * * * * * *" << endl;
	
	int i;
	int ult = 14;
	
    
    do{
    	cout << i;
    	if (i < ult-1)
    	  cout << ",";
    	
		i = i + 2;
		
	} while (i <= ult);
	
	cout << endl;
	
	
	return 0;
}
