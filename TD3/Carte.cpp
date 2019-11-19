#include "Carte.h"
#include<strstream>

using namespace std;
namespace td3
{
	Carte::Carte(Carte::Valeur valeur,Carte::Couleur couleur):_valeur(valeur),_couleur(couleur){
		
	}

	Carte Carte::Random()
	{
		Carte c(Valeur(rand()%8),Couleur(rand()%4));
		return c;
	}

	string Carte::ToString() const
	{
		strstream sstr;
		switch(_valeur)
		{
			case sept:
				sstr << "7";
				break;
			case huit:
				sstr << "8";
				break;
			case neuf:
				sstr << "9";
				break;
			case dix:
				sstr << "10";
				break;
			case valet:
				sstr << "valet";
				break;
			case dame:
				sstr << "dame";
				break;
			case roi:
				sstr << "roi";
				break;
			case as:
				sstr << "as";
				break;

		}
		sstr << " de";
		switch(_couleur)
		{
			case carreau:
				sstr << " carreau";
				break;
			case coeur:
				sstr << " coeur";
				break;
			case pique:
				sstr << " pique";
				break;
			case trefle:
				sstr << " trefle";
				break;
		}
		sstr << '\0';
		return sstr.str();
	}

	Carte::Couleur Carte::GetCouleur() const{
		return _couleur;
	}

	Carte::Valeur Carte::GetValeur() const{
		return _valeur;
	}

}
