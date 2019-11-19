#pragma once
#include<string>
namespace td3
{
class Carte
{
public:
	enum Couleur{carreau,coeur,pique,trefle};
	enum Valeur{sept,huit,neuf,dix,valet,dame,roi,as};

	Carte(Valeur valeur=sept,Couleur couleur=carreau);
	std::string ToString() const;
	Couleur GetCouleur() const;
	Valeur GetValeur() const;

	static Carte Random();
private:
	Valeur _valeur;
	Couleur _couleur;
};
}

