#include "Personne.h"
#include<sstream>
using namespace std;

namespace td2
{
	Personne::Personne() : _nom("xxx"), _prenom("xxx"), _age(0)
	{
	}
	Personne::Personne(std::string nom, std::string prenom, int age) : _nom(nom), _prenom(prenom), _age(age) 
	{
	}
	Personne::Personne(const Personne& p) : _nom(p._nom), _prenom(p._prenom), _age(p._age)
	{
	}

	string Personne::GetNom() const
	{	
		return _nom;
	}

	string Personne::GetPrenom() const
	{
		return _prenom;
	}

	unsigned int Personne::GetAge() const
	{	
		return _age;
	}

	void Personne::Set(const string & N,const string & P, unsigned int A)
	{
		_nom=N;
		_prenom=P;
		_age=A;	
	}

	void Personne::Affiche(std::ostream &f) const
	{
		f << "Nom: " << _nom <<"\t";
		f << "Prenom: " << _prenom << "\t";
		f << _age << "ans";
	}

	string Personne::ToString() const
	{
		stringstream ss;
		Affiche(ss);
		return ss.str();
	}

	Personne& Personne::operator=(const Personne& p)
	{
		_age = p._age;
		_nom = p._nom;
		_prenom = p._prenom;
		return *this;
	}

	std::ostream& operator<<(std::ostream& os, const Personne& p)
	{
		os << p.ToString();
		return os;
	}
}