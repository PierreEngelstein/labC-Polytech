#include <iostream>
#include "ConteneurAbstrait.hpp"
#include "Int2Etats.hpp"
#include "FIFO.hpp"
#include "LIFO.hpp"

using namespace std;

void Procedure(ConteneurAbstrait * pC)
{
	cout << "*pC = " << pC->ToString() << endl;
	pC->Add(12);
	cout << "Apres Add(12) *pC = ";
	cout << pC->ToString() << endl;
	pC->Add(27);
	cout << "Apres Add(27) *pC = ";
	cout << pC->ToString() << endl;
	cout << "Taille de *pC=" << pC->GetTaille() << endl;
	pC->Add(-3);
	cout << "Apres Add(-3) *pC = ";
	cout << pC->ToString() << endl;
	pC->Supp();
	cout << "Apres Supp() *pC=" <<pC->ToString() << endl;
	cout << "Taille de *pC=" << pC->GetTaille() << endl;
}

int main(int argc, const char **argv)
{
	cout << "----Utilisation d'un objet de type Int2Etats--- \n";
	ConteneurAbstrait * pC = new Int2Etats;
	Procedure(pC);
	delete pC;

	cout << "----Utilisation d'un objet de type FIFO(File)--- \n";
	pC = new FIFO;
	Procedure(pC);
	delete pC;

	cout << "----Utilisation d'un objet de type LIFO(File)--- \n";
	pC = new LIFO;
	Procedure(pC);
	delete pC;
}