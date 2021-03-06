// LL1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "cstring"
using namespace std;
//strtol //strtod
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");
	{
		if (argc > 3)
			cout<<"Ошибка.Вводимых параметров должно быть три.";
		else
		{
			char* p1, *p2;
			double argument1 = strtod(argv[1], &p1);
			double argument2 = strtod(argv[3], &p2);
			if (strlen(p1) != 0 || strlen(p2) != 0)
				cout<<"Ошибка. Операнты не являются числами.";
			else
			{
				if (strlen(argv[2]) != 1)
					cout<<"Ошибка. Знак операции должен состоять из одного символа.";
				else
				{
					if (argv[2][0] == '+')
						cout<<argument1 + argument2;
					else if (argv[2][0] == '-')
						cout<<argument1 - argument2;
					else if (argv[2][0] == '/')
						cout<<argument1 / argument2;
					else if (argv[2][0] == '*')
						cout<<argument1 * argument2;
					else cout<<"Ошибка. Знак операции должен быть сложением, вычитаением, делением или умножением.";
				}
			}
		}
	}
	return 0;
}

