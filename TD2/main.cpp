#include<iostream>
#include "Personne.h"
#include "Groupe.h"

int main()
{  
        td2::Personne p("Martin","Jean",23);
        std::cout << p  << std::endl;

        td2::Personne p1(p);
        std::cout << p1  << "\n";
	td2::Personne p2;
        std::cout << p2 << "\n";
        p2=p1;
        std::cout << p2  << "\n**********\n";
        
        p  = td2::Personne("Durand","Jean",24);
        p1 = td2::Personne("Durand","Pierre",28);
        p2 = td2::Personne("Dupont","Matthieu",16);
        td2::Groupe g1;
        g1.Ajouter(p);
        g1.Ajouter(p1);
        g1.Ajouter(p2);
        std::cout << g1.ToString();

        std::cout << g1.Majeurs() << std::endl;
        std::cout << g1.NomEst("Dupont") << std::endl;
}