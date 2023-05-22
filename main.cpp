#include "Agenda.h"

int main()
{
	Agenda a;
	Contact* c1 = new Prieten("Vadana", "31.07.2003", "str. Mare, nr. 1", "0723");
	Contact* c2 = new Cunoscut("Marcu", "1234");
	Contact* c3 = new Coleg("Tudorica", "arbitru", "str. Pacii, nr. 11", "651320");
	Contact* c4 = new Prieten("Andrei", "08.08.2003", "str. Luncii, nr. 8", "951753");
	a.Adauga(c1); a.Adauga(c2); a.Adauga(c3); a.Adauga(c4);
	vector<Contact*> x = a.GetPrieteni();
	for (auto i : x)
		cout << i->GetNume() << ' ';
	cout << endl;
	Contact* dorit = a.Cauta("Tudorica");
	if (dorit != nullptr)
		cout << "Gasit" << endl;
	else cout << "Not Gasit" << endl;
	a.Sterge("Tudorica");
	dorit = a.Cauta("Tudorica");
	if (dorit != nullptr)
		cout << "Gasit" << endl;
	else cout << "Not Gasit" << endl;
	return 0;
}