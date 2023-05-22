#pragma once
#include "Contact.h"

class Prieten : public Contact
{
	private:
		string data_nastere;
		string adresa;
		string nr_telefon;
	public:
		Prieten(string n, string dn, string a, string nt)
		{
			nume = n;
			data_nastere = dn;
			adresa = a;
			nr_telefon = nt;
		}
		string GetAdresa()
		{
			return adresa;
		}
		string GetDataNastere()
		{
			return data_nastere;
		}
		string GetNrTelefon()
		{
			return nr_telefon;
		}
		string GetTip()
		{
			string tip = stringify(prieten);
			return tip;
		}
};