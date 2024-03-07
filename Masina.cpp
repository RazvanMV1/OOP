#include <iostream>

using namespace std;

#include "Masina.h"

void Masina::bisnitar()
{
	this->kilometraj = this->kilometraj - 1000;
}

void Masina::cursa(int distanta)
{
	if (0 <= distanta)
	{
		this->kilometraj += distanta;
		this->litriCombustibil -= this->consum * distanta / 100;
	}
}

bool Masina::SetLitriCombustibil(int newCombustibil)
{
	if (0 <= newCombustibil && newCombustibil <= 500)
		this->litriCombustibil = newCombustibil;
	else
		return false;
	return true;
}

bool Masina::SetConsum(float newConsum)
{
	if (0 <= newConsum && newConsum <= 100)
		this->consum = newConsum;
	else
		return false;
	return true;
}

bool Masina::SetKilometraj(long long newKilometraj)
{
	if (0 <= newKilometraj)
		this->kilometraj = newKilometraj;
	else
		return false;
	return true;
}

int Masina::GetLitriCombustibil()
{
	return this->litriCombustibil;
}

float Masina::GetConsum()
{
	return this->consum;
}

int Masina::GetKilometraj()
{
	return this->kilometraj;
}

void Masina::SetNumeFirma(char* numeFirma)
{
	if (this->numeFirma == 0)
		this->numeFirma = new char[100];

	int sz = strlen(numeFirma);
	for (int i = 0; i < sz; i++)
	{
		this->numeFirma[i] = numeFirma[i];
	}
}

char* Masina::GetNumeFirma()
{
	return this->numeFirma;
}