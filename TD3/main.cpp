#include "Carte.h"
#include "Memory.hpp"
#include <iostream>
int main()
{
        srand(time(NULL));
        // td3::Carte c1, c2(td3::Carte::dix, td3::Carte::pique), c3;

        // c1=td3::Carte::Random();
        // c3=td3::Carte::Random();

        // std::cout << c1.ToString() << "\n";
        // std::cout << c2.ToString() << "\n";
        // std::cout << c3.ToString() << "\n**********\n";
        
        srand(time(NULL));
        std::vector<td3::Carte> vc(3);
        for(unsigned i=0;i<3;i++)
                vc[i]=td3::Carte::Random();

        td3::Memory mem(vc);

        unsigned i1,i2;
        td3::Carte c1,c2;
        while(!mem.estTermine())
        {
                std::cout << mem.ToString();
                std::cout << "c1=";
                std::cin >> i1;
                std::cout << "c2=";
                std::cin >> i2;
                mem.Jouer(i1,i2,c1,c2);
                std::cout <<c1.ToString() << std::endl;
                std::cout <<c2.ToString() << std::endl;
        }
        return 0;
}