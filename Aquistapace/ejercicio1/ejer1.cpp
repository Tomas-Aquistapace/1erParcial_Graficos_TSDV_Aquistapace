#include "ejer1.h"

#include<iostream>
#include<stdlib.h>

using namespace std;

namespace parcial
{
	void MostrarCreditos()
	{
		cout << "Aquistapace" << endl;
		cout << "Tomas" << endl;
		cout << "Visual Studio 2017" << endl;
	}

	float Diferencia(float num1, float num2)
	{
		float dif = 0;
		float absoluto = 0;

		dif = num1 - num2;

		absoluto = abs(dif);

		return absoluto;
	}
}