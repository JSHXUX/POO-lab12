#pragma once
#include <string.h>
#include <iostream>
#define stringify( name ) #name
using namespace std;

enum tipuri
{
	prieten,
	coleg,
	cunoscut
};
class Contact
{
	protected:
		string nume;
	public:
		string GetNume()
		{
			return nume;
		}
		virtual string GetTip() = 0;
};