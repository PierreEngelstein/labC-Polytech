#pragma once
#include<string>
#include<iostream>

namespace td2
{
	class Personne  
	{
		public:
			Personne();
			Personne(std::string nom, std::string prenom, int age);
			Personne(const Personne& p);
			std::string GetPrenom() const;
			std::string GetNom() const;
			unsigned int GetAge() const;
			void Set(const std::string & N,const std::string & P,unsigned int A);
			void Affiche(std::ostream & f) const;
			std::string ToString() const;

			Personne& operator=(const Personne& p);

			friend std::ostream& operator<<(std::ostream& os, const Personne& p);
		private:
			std::string _nom;
			std::string _prenom;
			unsigned int _age;
	};
}