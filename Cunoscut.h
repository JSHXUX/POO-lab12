#pragma once
#include "Contact.h"

class Cunoscut : public Contact
{
	private:
		string nr_telefon;
	public:
		Cunoscut(string n, string nt)
		{
			nume = n;
			nr_telefon = nt;
		}
		string GetNrTelefon()
		{
			return nr_telefon;
		}
		string GetTip()
		{
			string tip = stringify(cunoscut);
			return tip;
		}
};