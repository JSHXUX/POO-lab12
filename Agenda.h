#pragma once
#include "Coleg.h"
#include "Cunoscut.h"
#include "Prieten.h"
#include <vector>

class Agenda
{
	private:
		vector<Contact*> contacte;
	public:
		Contact* Cauta(string nume)
		{
			for (auto i : contacte)
				if (i->GetNume() == nume)
					return i;
			return nullptr;
		}
		vector<Contact*> GetPrieteni()
		{
			vector<Contact*> c;
			for (auto i : contacte)
				if (i->GetTip() == "prieten")
					c.push_back(i);
			return c;
		}
		void Sterge(string nume)
		{
			int nr = 0;
			for (auto i : contacte)
			{
				nr++;
				if (i->GetNume() == nume)
				{
					contacte.erase(contacte.begin() + nr - 1);
					break;
				}
			}
		}
		void Adauga(Contact* c)
		{
			contacte.push_back(c);
		}
		/*void Print()
		{
			for (auto i : contacte)
				cout << i->GetNume() << ' ' << i->GetTip() << endl;
			cout << endl;
		}*/
};