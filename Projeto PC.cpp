// Projeto PC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Cliente.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i;

	Cliente c[100];
	Cliente aux("jeje", "laranjeira, 238", "109.122.121-23", "!", "1238-9823");
	c[0] = aux;

	Cliente aux2("jaja", "mangueira, 666", "123.535.756-23", "#", "1287-2389");
	Cliente aux3("jojo", "laranjeira, 238", "109.123.121-23", "!", "1238-9823");
	//cout << c[0].toString; 

	c[1] = aux2;
	c[2] = aux3;
	string cpff = "109.123.121-23";
	
	string namee = "jaja";

	//Busca através do CPF
		
	for (i = 0; i < 3; i++)
	{
		if (c[i].getCpf() == cpff)
			cout << c[i].toString() << endl;
	};

	//Busca através do nome

	for (i = 0; i < 3; i++)
	{
		if (c[i].getName() == namee)
			cout << c[i].toString() << endl;
	};

	
	system("PAUSE");
	return 0;
}


