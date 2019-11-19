#include "Groupe.h"

namespace td2
{
        std::string Groupe::ToString() const
        {
                std::string str = "Groupe de " + std::to_string(_vGroupe.size()) + ":\n";
                for(auto p : _vGroupe)
                {
                        str += p.ToString() + "\n";
                }
                return str;
        }

        void Groupe::Ajouter(Personne& p)
        {
                _vGroupe.push_back(p);
        }

        Groupe Groupe::Majeurs()
        {
                Groupe res;
                for(auto p : _vGroupe)
                {
                        if(p.GetAge() >= 18)
                                res.Ajouter(p);
                }
                return res;
        }
        Groupe Groupe::NomEst(std::string nom)
        {
                Groupe res;
                for(auto p : _vGroupe)
                {
                        if(p.GetNom() == nom)
                                res.Ajouter(p);
                }
                return res;
        }


        std::ostream& operator<< (std::ostream& os, const Groupe& c)
	{
		os << c.ToString();
		return os;
	}

}