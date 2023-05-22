#pragma once
#include "Contact.h"

class Coleg : public Contact 
{
	private:
		string serviciu;
		string adresa;
		string nr_telefon;
	public:
		Coleg(string n, string s, string a, string nt)
		{
			nume = n;
			serviciu = s;
			adresa = a;
			nr_telefon = nt;
		}
		string GetAdresa()
		{
			return adresa;
		}
		string GetServiciu()
		{
			return serviciu;
		}
		string GetNrTelefon()
		{
			return nr_telefon;
		}
		string GetTip()
		{
			string tip = stringify(coleg);
			return tip;
		}
};