#include "Memory.hpp"
#include <algorithm>
#include <iostream>
#include<sstream>

namespace td3
{
        Memory::Memory()
        {
                
        }
        Memory::Memory(const Memory& m) : _cartes(m._cartes)
        {

        }
        Memory::Memory(std::vector<Carte> vect)
        {
                _cartes = std::vector<std::pair<Carte, bool>>(2*vect.size());
                for(int i = 0; i < vect.size(); i++)
                {
                        _cartes[2*i] = _cartes[2 * i + 1] = std::make_pair(vect[i], false);
                }
                std::random_shuffle(_cartes.begin(), _cartes.end());
        }

        void Memory::Affiche(std::ostream &f) const
	{
		for(int i = 0; i < _cartes.size(); i++)
                {
                        f << "[" << i << "]";
                        if(_cartes[i].second)
                                f << _cartes[i].first.ToString() << "\n";
                        else
                                f << "----------\n";
                }
	}
        
        void Memory::Jouer(unsigned index1, unsigned index2, Carte& c1, Carte& c2)
        {
                if(index1 > _cartes.size() || index2 > _cartes.size())
                        return;

                c1 = _cartes[index1].first;
                c2 = _cartes[index2].first;
                if(c1.GetCouleur() == c2.GetCouleur() && c1.GetValeur() == c2.GetValeur())
                        _cartes[index1].second = _cartes[index2].second = true;
        }

        std::string Memory::ToString() const
        {
                std::stringstream ss;
		Affiche(ss);
		return ss.str();
        }

        bool Memory::estTermine()
        {
                for(auto p : _cartes)
                {
                        if(!p.second)
                                return false;
                }
                return true;
        }
}